#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string aaa = "Def";
	ifstream input(aaa+".txt");
	/*string ininin;
	int inin;

	for (int i = 0; i < 12; i++) {
		//input >> inin>>ininin;
		//cout <<inin<<" "<< ininin<<endl;
		getline(input, ininin);
		cout << ininin<<endl;
	}*/
	
	
	ofstream ourout(aaa+".txt");
	for (int i = 0; i < 10; i++) {
		ourout <<i+1<< " Defne" << endl;
	}
	ourout.close();
}