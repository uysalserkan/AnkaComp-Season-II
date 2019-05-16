#include <iostream>
#include <string>
#include "Base.h"
using namespace std;
Base::Base(const string&a,const string&b,const string&c,double x,double y,double z):Commission(a,b,c,x,y){setBaseSalary(z);}
void Base::setBaseSalary(double a){
    if(a>=0.0)
        BaseSalary=a;
    else
        throw invalid_argument("Taban gelir 0'dan kucuk olamaz!!");
}
double Base::getBaseSalary()const{return BaseSalary;}
double Base::earnings()const{
    return getBaseSalary()*Commission::earnings();
}
void Base::print()const{
    cout <<"Base Salaried\n";
    Commission::print();
    cout <<"\nBase Salary: "<<getBaseSalary();
}
