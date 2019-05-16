#include <iostream>
#include "CommissionEmployee.h"
using namespace std;
CommissionEmployee::CommissionEmployee(const string& nm,const string& srnm,const string& scscnm,double sale,double rate):Name(nm),Surname(srnm),SocialSecurityNumber(scscnm),GrossSales(sale),CommissionRate(rate){;}
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
string CommissionEmployee::getName(){return Name;}
string CommissionEmployee::getSurname(){return Surname;}
string CommissionEmployee::getSocialSecurityNumber(){return SocialSecurityNumber;}
double CommissionEmployee::getGrossSales(){return GrossSales;}
double CommissionEmployee::getCommissionRate(){return CommissionRate;}
double CommissionEmployee::earnings()const{ return CommissionRate*GrossSales;}
void CommissionEmployee::print()const{
	cout <<"Commission Employee: "<<Name<<" "<<Surname<<endl<<"Social Security Number: "<<SocialSecurityNumber<<endl<<"Gross Sale: "<<GrossSales<<endl<<"Commission Rate: "<<CommissionRate<<endl;
}
