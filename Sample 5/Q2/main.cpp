#include <iostream>
#include "Complex.h"
using namespace std;
int main(int argc, char const *argv[]) {
	Complex x1(2,3);
	Complex x2(5,1);
	cout <<"x1: "<<x1<<"x2: "<<x2<<"x1+x2: "<<x1+x2<<"x1-x2: "<<x1-x2;
	return 0;
}
