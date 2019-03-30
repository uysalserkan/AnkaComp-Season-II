#include "SalariedEmployee.h"
#include <iostream>
#include <string>
using namespace std;
SalariedEmployee::SalariedEmployee(const string&a,const string&b,const string&ssc,double sal):Employee(a,b,ssc){setweeklysalary(sal);};
void SalariedEmployee::setweeklysalary(double sal){
    if(sal>=0.0)
        weeklysalary=sal;
    else
        throw invalid_argument("Maasiniz 0'dan dusuk olamaz..!");
}
double SalariedEmployee::getweeklysalary()const{return weeklysalary;}
double SalariedEmployee::earnings()const{
    return getweeklysalary();
}
void SalariedEmployee::print()const{
    cout <<"Salaried Employee\n";
    Employee::print();
    cout <<"\nWeekly Salary: "<<getweeklysalary();
}
