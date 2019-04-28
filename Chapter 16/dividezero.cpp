#include <iostream>
#include "Divide_by_Zero.h"
using namespace std;
double quotient(int num, int den) {
	if (den == 0) {
		throw DivideByZero();
	}
	return static_cast<double>(num) / den;
}

int main() {
	int num1, num2;
	double result;
	cout << "Enter two integer: ";
	while (cin >> num1 >> num2) {
		try {
			result = quotient(num1, num2);
			cout << "Result is: " << result<<endl;
		}
		catch(DivideByZero &dividebyzero){
			cout << "Exception occured: " << dividebyzero.what()<<endl;
		}
	}

}