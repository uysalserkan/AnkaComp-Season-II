#include <iostream>
#include "Employee.h"
using namespace std;
int main(){
	Date birt(8,25,1998);
	Date hire(7,23,2007);
	Employee("Jack","Comp.",birt,hire);
}
