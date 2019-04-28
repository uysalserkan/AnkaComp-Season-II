#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.hpp"
using namespace std;

int main() {
	int accountNumber;
	string firstName;
	string lastName;
	double balance;
	fstream outCredit("credit.dat", ios::in | ios::out | ios::binary);
	if (!outCredit) {
		cerr << "File couldn't opened..!\n";
		exit(1);
	}
	cout << "Enter account number (1 to 100, 0 to end input)\n";
	ClientData client;
	cin >> accountNumber;

	while (accountNumber>0 && accountNumber<=100){
		cout << "Enter firstname, lastname and balance..\n";
		cin >> firstName;
		cin >> lastName;
		cin >> balance;
		client.setfirstName(firstName);
		client.setlastName(lastName);
		client.setBalance(balance);
		client.setAccNumber(accountNumber);

		outCredit.seekp((client.getAccNumber() - 1) * sizeof(ClientData));
		outCredit.write(reinterpret_cast<const char*>(&client), sizeof(ClientData));
		cout << "Enter account number: ";
		cin >> accountNumber;
	}
}