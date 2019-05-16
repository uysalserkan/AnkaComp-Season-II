#include <iostream>
using namespace std;
int main(void){
    int width=4;
    char sentence[10];
    cout <<"Enter a sentence: ";
    cin.width(5);
    while(cin>>sentence){
        cout.width(width++);
        cout <<sentence<<endl;
        cin.width(5);
    }
}
