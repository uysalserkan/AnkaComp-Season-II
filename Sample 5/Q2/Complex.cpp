#include <iostream>
#include "Complex.h"
using namespace std;
Complex::Complex(double r=0,double i=0):real(i),imag(i){}
double Complex::getReal(){ return real;}
void Complex::setReal(double r){ real=r;}
double Complex::getImag(){ return imag;}
void Complex::setImag(double i){ imag=i;}
Complex operator+(const Complex& x1, const Complex& x2){
	Complex temp;
	temp.real=x1.real+x2.real;
	temp.imag=x1.imag+x2.imag;
	return temp;
}
Complex operator-(const Complex&x1, const Complex&x2){
	Complex temp;
	temp.real=x1.real-x2.real;
	temp.imag=x1.imag-x2.imag;
	return temp;
}
ostream& operator<<(ostream& out, const Complex& a){
	out <<a.real <<" + i"<<a.imag<<endl;
	return out;
}
