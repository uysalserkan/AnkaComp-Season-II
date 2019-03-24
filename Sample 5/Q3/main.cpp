#include <iostream>
#include "Point.h"
using namespace std;
int main(void) {
	Point Pt1(3,5);
	Point Pt2(1,2);
	cout <<"PT1+PT2: "<<Pt1+Pt2;
	cout <<"PT1-PT2: "<<Pt1-Pt2;
	Pt2();
	cout <<"PT2: "<<Pt2;
	return 0;
}
