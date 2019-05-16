#include <iostream>
#include <stdexcept>
using namespace std;
void throwException() {
	try {
		cout << "Function throwException throws an exception\n";
		throw exception();
	}
	catch (exception&) {
		cout << "Exception handled in function throwException\n";
		throw;
	}
	cout << "This also shout not print";
}
int main() {
	try {
		cout << "\nmain invokes function throwException\n";
		throwException();
		cout << "This won't be print!\n";
	}
	catch (exception&) {
		cout << "\n Exception handled in main\n";

	}
	cout << "Program control continues after catch in main\n";
}