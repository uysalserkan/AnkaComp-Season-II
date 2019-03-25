#include <iostream>
#include "BasePlus.h"
using namespace std;
BasePlus::BasePlus(const string& nm,const string& srnm,const string& ssc,double gr,double cm,double bs):CommissionEmployee(nm,srnm,ssc,gr,cm){
	setBaseSalary(bs);
}
void BasePlus::setBaseSalary(double bs){
	if (bs>0.0) {
		BaseSalary=bs;
	}
	else{
		throw invalid_argument("Gecersiz bir deger girdiniz.!\n");
	}
}
double BasePlus::getBaseSalary()const{return BaseSalary;}
double BasePlus::earnings()const{return BaseSalary + CommissionRate*GrossSales;}
void BasePlus::print()const{
	cout <<"Commission Employee: "<<Name<<" "<<Surname<<endl<<"Social Security Number: "<<SocialSecurityNumber<<endl<<"Gross Sale: "<<GrossSales<<endl<<"Commission Rate: "<<CommissionRate<<endl<<"Base Salary: "<<BaseSalary<<endl;

}
