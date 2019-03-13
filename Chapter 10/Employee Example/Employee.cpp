#include <iostream>
#include "Employee.h"
#include "Date.h"
using namespace std;
Employee::Employee(const string &nm, const string &srnm, const Date &brtdy, const Date &hrdy):firstname(nm),secondname(srnm),BirthDay(brtdy),HireDay(hrdy){
	cout <<" Employee constructor "<<firstname<<" "<<secondname<<endl;
}
void Employee::print() const {
	cout <<firstname <<","<<secondname<<"Hired Day: ";
	HireDay.print();
	cout<<"Birt Day: ";
	BirthDay.print();
	cout<<endl;
}
Employee::~Employee(){
	cout <<firstname<<" "<<secondname<<" will be destroy by Destructive function!\n";
}
