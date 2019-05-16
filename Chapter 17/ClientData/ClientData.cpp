#include <string>
#include "ClientData.hpp"
using namespace std;

ClientData::ClientData(int AccNum, string lastName, string firstName, double balance){
	setAccNumber(AccNum);
	setlastName(lastName);
	setfirstName(firstName);
	setBalance(balance);
}

void ClientData::setAccNumber(int accNum){
	AccNumber = accNum;
}
int ClientData::getAccNumber() const{
	return AccNumber;
}

void ClientData::setlastName(string last){
	int length=last.size();
	length = (length < 15 ? length : 14);
	last.copy(lastName, length);
	lastName[length] = '\0';
}

string ClientData::getlastName() const {
	return lastName;
}

void ClientData::setfirstName(string first){
	int length = first.size();
	length = (length < 10 ? length : 9);
	first.copy(firstName, length);
	firstName[length] = '\0';
}

string ClientData::getfirstName() const {
	return firstName;
}

void ClientData::setBalance(double bal){
	balance = bal;
}

double ClientData::getBalance() const{
	return balance;
}
