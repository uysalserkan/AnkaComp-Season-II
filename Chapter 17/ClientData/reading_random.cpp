#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "ClientData.hpp"
using namespace std;

void output(ostream&, const ClientData&);
int main() {
	ifstream inCredit("credit.dat", ios::in | ios::binary);
	if (!inCredit) {
		cerr << "File couldn't opened..!\n";
		exit(1);
	}
	cout << left << setw(10) << "Account" << setw(16) << "First Name" << setw(11)
		<< "Last Name" << left << setw(10) << right << "Balance" << endl;
	ClientData client;
	inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	while (inCredit && !inCredit.eof()) {
		if (client.getAccNumber() != 0) {
			output(cout, client);
		}
		inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	}
	
}
void output(ostream &out, const ClientData &client) {
	out << left << setw(10) << client.getAccNumber()
		<< setw(16) << client.getfirstName() << setw(11) << client.getlastName()
		<< setw(10) << setprecision(2) << right << fixed << showpoint <<
		client.getBalance() << endl;
}