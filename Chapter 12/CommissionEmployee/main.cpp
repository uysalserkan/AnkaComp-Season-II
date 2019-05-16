#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;
int main(){
	CommissionEmployee SS{"Ezel","Bayraktar","25-08-1998",25000,0.8};
	cout <<fixed<<setprecision(2);
	cout <<"\tEmployee Informations with print function:\n";
	SS.print();
	cout <<"\n\tEmployee Informations with get functions:\n";
	cout <<"Name: "<<SS.getName()<<endl<<"Surname: "<<SS.getSurname()<<endl<<"Social Security Number: "<<SS.getSocialSecurityNumber()<<endl<<"Gross Sale: "<<SS.getGrossSales()<<endl<<"Commission Rate: "<<SS.getCommissionRate()<<endl<<endl<<"Employee Earnings: "<<SS.earnings()<<endl;
}
