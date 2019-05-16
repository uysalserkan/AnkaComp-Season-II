#include <iostream>
#include <iomanip>
#include "BasePlus.h"
using namespace std;
int main(){
	BasePlus SS{"Ezel","Bayraktar","25-08-1998",25000,0.8,2500};
	cout <<fixed<<setprecision(2);
	cout <<"\tEmployee Informations with print function:\n";
	SS.print();
	cout <<"\n\tEmployee Informations with get functions:\n";
	cout <<"Name: "<<SS.getName()<<endl<<"Surname: "<<SS.getSurname()<<endl<<"Social Security Number: "<<SS.getSocialSecurityNumber()<<endl<<"Gross Sale: "<<SS.getGrossSales()<<endl<<"Commission Rate: "<<SS.getCommissionRate()<<endl<<"Base Salary: "<<SS.getBaseSalary()<<endl<<endl<<"Employee Earnings: "<<SS.earnings()<<endl;
}
