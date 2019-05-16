#include <iostream>
#include "CommissionEmployee.h"
using namespace std;
CommissionEmployee::CommissionEmployee(const string&nm,const string&sr,const string&ssc,double rt,double cm):Name(nm),Surname(sr),SocialSecurityNumber(ssc){
	setGrossSales(rt);
	setCommissionRate(cm);
}
void CommissionEmployee::setName(const string&nm){Name=nm;}
void CommissionEmployee::setSurname(const string&sr){Surname=sr;}
void CommissionEmployee::setSocialSecurityNumber(const string&ssc){SocialSecurityNumber=ssc;}
void CommissionEmployee::setGrossSales(double sale){
	if(sale>0.0)
	GrossSales=sale;
	else
	throw invalid_argument("Your sale number is not valid!\n");
}
void CommissionEmployee::setCommissionRate(double rate){
	if(rate> 0.0&&rate<1.0)
	CommissionRate=rate;
	else
	throw invalid_argument("Your rate number is not valid!\n");
}
string CommissionEmployee::getName()const{return Name;}
string CommissionEmployee::getSurname()const{return Surname;}
string CommissionEmployee::getSocialSecurityNumber()const{return SocialSecurityNumber;}
double CommissionEmployee::getGrossSales()const{return GrossSales;}
double CommissionEmployee::getCommissionRate()const{return CommissionRate;}
double CommissionEmployee::earnings()const{ return getCommissionRate()*getGrossSales();}
void CommissionEmployee::print()const{
	cout <<"Commission Employee: "<<getName()<<" "<<getSurname()<<endl<<"Social Security Number: "<<getSocialSecurityNumber()<<endl<<"Gross Sale: "<<getGrossSales()<<endl<<"Commission Rate: "<<getCommissionRate()<<endl;
}
