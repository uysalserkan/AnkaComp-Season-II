#include <iostream>
#include "Rational.h"
using namespace std;
int main(int argc, char const *argv[]) {
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	Rational x1(a,b);
	Rational x2(c,d);
	Rational x3(x1*x2);
	Rational x4(x1+x2);
	Rational x5(x1-x2);
	Rational x6(x1/x2);
	cout <<"x1: "<<x1
	<<endl<<"x2: "<<x2
	<<endl<<"x1*x2: "<<x3<<endl;
	cout <<"x1+x2: "<<x4<<endl
	<<"x1-x2: "<<x5<<endl
	<<"x1/x2: "<<x6<<endl;
	return 0;
}
