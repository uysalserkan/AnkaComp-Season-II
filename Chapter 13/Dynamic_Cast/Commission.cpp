#include <iostream>
#include <string>
#include "Commission.h"
using namespace std;
Commission::Commission(const string&a,const string&b,const string&c,double gr,double comm):Employee(a,b,c){
    setGrossSale(gr);
    setCommissionRate(comm);
}
double Commission::getCommissionRate()const{return CommissionRate;}
void Commission::setCommissionRate(double a){CommissionRate=a; }
void Commission::setGrossSale(double a){ GrossSale=a;}
double Commission::getGrossSale()const{return GrossSale;}
double Commission::earnings()const{
    return getGrossSale()*getCommissionRate();
}
void Commission::print()const{
    cout <<"Commission Employee\n";
    Employee::print();
    cout <<"\nGross Sale: "<<getGrossSale()<<"\nCommission Rate: "<<getCommissionRate();
}
/*
double GrossSale, CommissionRate;

Commission(const string&,const string&,const string&,double=0.0,double=0.0);
void setCommissionRate(double);
double getCommissionRate();
void setGrossSale(double);
double getGrossSale();
virtual double earnings()const;
virtual void print()const;
*/
