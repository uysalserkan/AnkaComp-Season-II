#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
Employee::Employee(const string&n,const string&s,const string&ssc):name(n),surname(s),socialsecuritynumber(ssc){;}
void Employee::setname(string&n){name=n;}
string Employee::getname()const{return name;}
void Employee::setsurname(string&s){surname=s;}
string Employee::getsurname()const{return surname;}
void Employee::setsocialsecuritynumber(string&ssc){socialsecuritynumber=ssc;}
string Employee::getsocialsecuritynumber()const{return socialsecuritynumber;}
void Employee::print()const{
    cout <<getname()<<" "<<getsurname()<<endl<<"Social Security Number: "<<getsocialsecuritynumber();
}
