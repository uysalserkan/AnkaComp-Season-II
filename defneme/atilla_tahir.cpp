#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	string fileName="DGF";
	string file;
	/*ofstream out(fileName + ".txt");
	while(file != "cikis") {
		getline(cin, file);
		if(file =="cikis"){
			break;
		}
		out << file<<endl;
	}
	*/
	ifstream in(fileName + ".txt");
	while (!in.eof()) {
		getline(in, file);
		cout << file << endl;
	}
	

}