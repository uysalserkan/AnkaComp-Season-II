#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex{
private:
	double real, imag;
public:
	Complex(double,double);
	double getReal();
	void setReal(double);
	double getImag();
	void setImag(double);
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator-(const Complex&, const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
};
#endif
