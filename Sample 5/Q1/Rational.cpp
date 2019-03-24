#include <iostream>
#include "Rational.h"
using namespace std;
ostream &operator<<(ostream& output, const Rational &rat){
	output <<rat.num<<"/"<<rat.den;
	return output;
}
void Rational::reduction(void){
	for (size_t i = 1; i < this->num; i++) {
		if((this->num%i==0)&&(this->den%i==0)){
			this->den/=i;
			this->num/=i;
			i=2;
		}
	}
}
Rational Rational::operator*(Rational a){
	Rational temp=*this;
	temp.num*=a.num;
	temp.den*=a.den;
	temp.reduction();
	return temp;
}
Rational Rational::operator+(Rational a){
	Rational temp=*this;
	temp.num*=a.den;
	a.num*=temp.den;
	temp.num+=a.num;
	temp.den*=a.den;
	temp.reduction();
	return temp;
}
Rational Rational::operator-(Rational a){
	Rational temp=*this;
	temp.num*=a.den;
	a.num*=temp.den;
	temp.num-=a.num;
	temp.den*=a.den;
	temp.reduction();
	return temp;
}
Rational::Rational(int a=0,int b=1):num(a),den(b){

}
void Rational::setFraction(int a,int b){
	this->num=a;
	this->den=b;
}
