#include <iostream>
#include "Employee.h"
#include <string>
using namespace std;
//Header functions..
int Employee::count=0;
int Employee::getCount(){
	return count;
}
Employee::Employee(const string &fn, const string &sn):firstname(fn),surname(sn){
	++count;
	cout <<"Employee constructor called for: "<<firstname<<" "<<surname<<endl;
}
Employee::~Employee(){
	cout <<"Destructor called for: "<<firstname<<" "<<surname<<endl;
	--count;
}
string Employee::getFirstname()const{
	return firstname;
}
string Employee::getSurname()const{
	return surname;
}
