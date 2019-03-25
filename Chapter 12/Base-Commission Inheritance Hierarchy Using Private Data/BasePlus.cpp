#include <iostream>
#include "BasePlus.h"
using namespace std;
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
double BasePlus::earnings()const{return CommissionEmployee::earnings();}
void BasePlus::print()const{
	CommissionEmployee::print();
	cout <<"Base Salary: "<<getBaseSalary()<<endl;
}
