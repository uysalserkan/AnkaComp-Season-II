#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "ClientData.hpp"
using namespace std;

int enterChoice();
void createTextFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void output(ostream&, const ClientData&);
int getAccount(const char* const);
enum Choices{PRINT=1,UPDATE=2,NEW=3,DELETE=4,END=5};
int main() {
	fstream inOutCredit("credit.dat", ios::in | ios::out | ios::binary);
	if (!inOutCredit) {
		cerr << "File couldn't opened!!\n";
		exit(1);
	}
	int choice;
	while ((choice = enterChoice()) != END) {
		switch (choice) {
		case PRINT:
			createTextFile(inOutCredit);
			break;
		case UPDATE:
			updateRecord(inOutCredit);
			break;
		case NEW:
			newRecord(inOutCredit);
			break;
		case DELETE:
			deleteRecord(inOutCredit);
			break;
		default:
			cerr << "Incorrect choice..!\n";
			break;
		}
		inOutCredit.clear();
	}
}

int enterChoice() {
	cout << "\nEnter your choice\n" << "1 - Store a formatted text file of accounts called \"print.txt\" for printing\n"
		<< "2 - update an account \n" << "3 - add new account\n" << "4 - delete an account\n"
		<< "5 - end program\n";
	int menuchoice;
	cin >> menuchoice;
	return menuchoice;
}
void createTextFile(fstream& readFromFile) {
	ofstream outPrintFile("print.txt", ios::out);
	if (!outPrintFile) {
		cerr << "File Couldn't opened!!\n";
		exit(1);
	}
	outPrintFile << left << setw(10) << "Account" << setw(10) << "First Name" << setw(16) << "Last Name" << setw(11) << "Balance" << endl;
	readFromFile.seekg(0);
	ClientData Client;
	readFromFile.read(reinterpret_cast<char*>(&Client), sizeof(ClientData));

	while (!readFromFile.eof()) {
		if (Client.getAccNumber() != 0) {
			output(outPrintFile, Client);
		}
		readFromFile.read(reinterpret_cast<char*>(&Client), sizeof(ClientData));
	}
}
void updateRecord(fstream& updateFile) {
	int AccountNumber = getAccount("Enter Account to update");
	ClientData Client;
	updateFile.read(reinterpret_cast<char*>(&Client), sizeof(ClientData));
	if (Client.getAccNumber() != 0) {
		output(cout, Client);
		cout << "\nEnter Charge (+) or Payment (-)";
		double trans;
		cin >>trans;
		double oldBalance;
		oldBalance = Client.getBalance();
		Client.setBalance(oldBalance + trans);
		output(cout, Client);
		updateFile.seekp((AccountNumber - 1) * sizeof(ClientData));
		updateFile.write(reinterpret_cast<char*>(&Client), sizeof(ClientData));

	}
	else
		cerr << "Account #" << AccountNumber << " Has no information..\n";

}

void newRecord(fstream& insertInFile) {
	int AccountNumber = getAccount("Enter new account number..");
	insertInFile.seekg((AccountNumber - 1) * sizeof(ClientData));
	ClientData Client;
	insertInFile.read(reinterpret_cast<char*>(&Client), sizeof(ClientData));
	if (Client.getAccNumber() == 0) {
		string firstnm, lastnm;
		double balance;
		cout << "Enter FirstName LastName and balance..\n";
		cin >> setw(10) >> firstnm >> setw(15) >> lastnm >> balance;
		Client.setfirstName(firstnm);
		Client.setlastName(lastnm);
		Client.setBalance(balance);
		Client.setAccNumber(AccountNumber);
		insertInFile.seekp((AccountNumber - 1) * sizeof(ClientData));
		insertInFile.write(reinterpret_cast<const char*>(&Client), sizeof(ClientData));
	}
	else
		cerr << "Account #" << AccountNumber << " already contains some information..\n";
}

void deleteRecord(fstream& deleteFromFile) {
	int AccountNumber = getAccount("Enter Account to delete..");
	deleteFromFile.seekg((AccountNumber - 1) * sizeof(ClientData));
	ClientData Client;
	deleteFromFile.read(reinterpret_cast<char*>(&Client), sizeof(ClientData));
	if (Client.getAccNumber() != 0) {
		ClientData blankClient;
		deleteFromFile.seekp((AccountNumber - 1) * sizeof(ClientData));
		deleteFromFile.write(reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
		cout << "Account #" << AccountNumber << " deleted..\n";
	}
	else
		cerr << "Account #" << AccountNumber << " is already empty..\n";
}

void output(ostream& out, const ClientData& record) {
	out << left << setw(10) << record.getAccNumber() << setw(11) << record.getfirstName() << setw(16) << record.getlastName() << setw(10) << setprecision(2)
		<< right << fixed << showpoint << record.getBalance() << endl;
}
int getAccount(const char* const prompt) {
	int AccountNumber;
	do {
		cout << prompt << "(1-100): ";
		cin >> AccountNumber;
	} while (AccountNumber < 1 || AccountNumber>100);
	return AccountNumber;
}