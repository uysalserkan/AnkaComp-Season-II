#include <iostream>
#include <iomanip>
#include "BasePlus.h"
#include "CommissionEmployee.h"
using namespace std;
int main() {
	CommissionEmployee Ramiz={"Ramiz","Karaeski","8-7-1980",1000,0.6};
	CommissionEmployee *Ramizptr=0;
	BasePlus Ezel={"Ezel","Bayraktar","25,8,2014",2500,0.8,2500};
	BasePlus *Ezelptr=0;
	cout <<fixed<<setprecision(2);
	cout <<"Printing base-class and derived-class objects:\n";
	Ramiz.print();
	cout <<endl<<endl;
	Ezel.print();
	Ramizptr=&Ramiz;
	Ezelptr=&Ezel;
	cout <<"Based-class pointer objects:\n";
	Ramizptr->print();
	cout <<"Derived-class pointer objects:\n";
	Ezelptr->print();
	Ramizptr=&Ezel;
	cout <<"Trying different pointer objects:\n";
	Ramizptr->print();
}
