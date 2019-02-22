#include <iostream>
#include <fstream>
using namespace std;
void create();
void list();
int main(){
    char answer;
    cout << "Do you want to list or create a file?[L/C] >> ";
    cin >> answer;
    switch (answer) {
        case 'L' :
        case 'l': list();break;
        case 'C':
        case 'c': create();break;
    }
}
void create(){
        string fname;
        cout <<"Please enter file name: ";
        getline(cin, fname);
        ofstream key;
        key.open(fname + ".txt");
        key << "This file will input.#\nSS.\nSerkan UYSAL\txX#"<<endl;
        key.close();
        cout << "File operated and closed.\n";
}
void list(){
    char command[50] = "ls -l";
    system(command);
}
