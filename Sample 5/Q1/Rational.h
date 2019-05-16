#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;
class Rational{
private:
	int num,den;
public:
	Rational(int,int);
	Rational();
	void setFraction(int,int);
	Rational operator+(Rational);
	Rational operator-(Rational);
	Rational operator*(Rational);
	Rational operator/(Rational);
	void reduction(void);
	friend ostream &operator<<(ostream&, const Rational&);
};
#endif
