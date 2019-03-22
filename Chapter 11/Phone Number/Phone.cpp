#include <iostream>
#include <string>
#include "PhoneNumber.h"
using namespace std;
int main() {
	PhoneNumber phone;
	cout << "Enter phone number in the form (123) 456-7890:" << endl;
	cin >> phone;
	cout << phone;
	return 0;
}
