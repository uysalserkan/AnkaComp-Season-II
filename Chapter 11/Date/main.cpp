#include <iostream>
#include "Date.h"
using namespace std;
int main(int argc, char const *argv[]) {
	Date d1(25,8,1998);
	Date d2;
	cout <<"D1: "<<d1<<"D2: "<<d2<<"D1 +5: "<<(d1+=5);
	d2.setDate(13,6,2007);
	cout <<"D2: "<<d2;
	++d2;
	cout <<"++d2: "<<d2;
	Date d3(7,7,2010);
	cout <<"D3: "<<d3<<"Pre: "<<++d3<<"Post: "<<d3++<<"After:"<<d3;
	return 0;
}
