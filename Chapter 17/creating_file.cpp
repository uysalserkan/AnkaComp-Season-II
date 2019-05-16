#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
	ofstream outClient("client.txt", ios::out);
	if (!outClient) {
		cerr << "File couldn't open!\n";
		exit(1);
	}
	cout << "Enter the account, name and balance\nIf you exit the file please enter end of file..\n";
	int acc;
	double balance;
	string name;
	while (cin >> acc >> name >> balance) {
		outClient << acc << " " << name << " " << balance << endl;
		cout << "?";
	}
}