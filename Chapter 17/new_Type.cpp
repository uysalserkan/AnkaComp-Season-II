#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
enum RequesType{ ZERO_BALANCE=1,CREDIT_BALANCE,DEBIT_BALANCE,END 
};
int getRequest();
bool shouldDisplay(int, double);
void output(int, const string, double);
int main() {
	ifstream inClient("client.txt", ios::in);
	if (!inClient) {
		cerr << "File couldn't opened.!!\n";
		exit(1);
	}
	int request, acc;
	string name;
	double balance;
	request = getRequest();
	while (request != END) {
		switch (request){
		case ZERO_BALANCE:
			cout << "\nAccounts with zero balance:\n";
			break; 
		case CREDIT_BALANCE:
			cout << "\nAccounts with credit balance:\n";
			break;
		case DEBIT_BALANCE:
			cout << "\nAccounts with debit balance:\n";
			break;
		}
		inClient >> acc >> name >> balance;
		while (!inClient.eof()) {
			if (shouldDisplay(request, balance))
				output(acc, name, balance);
			inClient >> acc >> name >> balance;
		}
		inClient.clear();
		inClient.seekg(0);
		request = getRequest();
	}
	cout << "End of Run..!!\n";
}
int getRequest() {
	int req;
	cout <<"\nEnter Request\n"<< " 1 - List accounts with zero balances" << endl
		<< " 2 - List accounts with credit balances" << endl
		<< " 3 - List accounts with debit balances" << endl		<< " 4 - End of run" << fixed << showpoint;

	do {
		cout << "\n?";
		cin >> req;
	} while (req<ZERO_BALANCE&& req>END);

	return req;
}
bool shouldDisplay(int type, double balance) {
	if (type == ZERO_BALANCE && balance == 0)
		return true;
	if (type == CREDIT_BALANCE && balance < 0)
		return true;
	if (type == DEBIT_BALANCE && balance > 0)
		return true;
	return false;
}
void output(int acc, const string name, double balance) {
	cout << left << setw(10) << acc << setw(13) << name << setw(7) 
		<< setprecision(2) << right << balance << endl;
}
