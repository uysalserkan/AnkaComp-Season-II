#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void output(int, const string, double);
int main() {
	ifstream inClient("client.txt", ios::in);
	if (!inClient) {
		cerr << "File couldn't opened..\n";
		exit(1);
	}
	int acc;
	string name;
	double balance;
	cout << left << setw(10) << "Account " << setw(13) << "Name " << "Balance " << endl << fixed << showpoint;
	inClient >> acc >> name >> balance;
	output(acc, name, balance);
}
void output(int acc, const string name, double balance) {
	cout << left << setw(10) << acc << setw(13) << name << setw(7) << setprecision(2) << right << balance << endl;

}