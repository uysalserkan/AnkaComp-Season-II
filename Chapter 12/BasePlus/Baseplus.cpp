#include <iostream>
#include <string>
#include "Baseplus.h"
using namespace std;
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& nm,const string& srnm,const string& scscnm,double sale,double rate, double slry):Name(nm),Surname(srnm),SocialSecurityNumber(scscnm),GrossSales(sale),CommissionRate(rate),BaseSalary(slry){;}
void BasePlusCommissionEmployee::setName(const string&nm){Name=nm;}
void BasePlusCommissionEmployee::setSurname(const string&sr){Surname=sr;}
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string&ssc){SocialSecurityNumber=ssc;}
void BasePlusCommissionEmployee::setGrossSales(double sale){
	if(sale>0.0)
	GrossSales=sale;
	else
	throw invalid_argument("Your sale number is not valid!\n");
}
void BasePlusCommissionEmployee::setCommissionRate(double rate){
	if(rate> 0.0&&rate<1.0)
	CommissionRate=rate;
	else
	throw invalid_argument("Your rate number is not valid!\n");
}
void BasePlusCommissionEmployee::setBaseSalary(double slry){
	if(slry>0.0)
	BaseSalary=slry;
	else
	throw invalid_argument("Your salary number is not valid!\n");
}
string BasePlusCommissionEmployee::getName()const{return Name;}
string BasePlusCommissionEmployee::getSurname()const{return Surname;}
string BasePlusCommissionEmployee::getSocialSecurityNumber()const{return SocialSecurityNumber;}
double BasePlusCommissionEmployee::getGrossSales()const{return GrossSales;}
double BasePlusCommissionEmployee::getBaseSalary()const{return BaseSalary;}
double BasePlusCommissionEmployee::getCommissionRate()const{return CommissionRate;}
double BasePlusCommissionEmployee::earnings()const{ return BaseSalary + CommissionRate*GrossSales;}
void BasePlusCommissionEmployee::print()const{
	cout <<"Commission Employee: "<<Name<<" "<<Surname<<endl<<"Social Security Number: "<<SocialSecurityNumber<<endl<<"Gross Sale: "<<GrossSales<<endl<<"Commission Rate: "<<CommissionRate<<endl<<"Base Salary: "<<BaseSalary<<endl;
}
