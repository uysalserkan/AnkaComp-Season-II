#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Commission.h"
#include "Base.h"
using namespace std;
void VirtualViaPtr(const Employee*const);
void VirtualViaRef(const Employee&);
int main(){
    cout << fixed <<setprecision(2);
    //Create objects
    // Employee pt1("Tevfik","Fikret","10,11,1967");
    SalariedEmployee pt2("Ezel","Bayraktar","6,8,2007",2500);
    Commission pt3("Eysan","Atay","23,5,2006",1800,0.9);
    Base pt4("Ramiz","Karaeski","16,4,1992",3000,0.8,1250);
    cout <<"Employees static binding!\n\n";
    // pt1.print();
    cout <<endl;
    pt2.print();
    cout <<"\nearned: "<<pt2.earnings();
    cout <<endl<<endl;
    pt3.print();
    cout <<"\nearned: "<<pt3.earnings();
    cout <<endl<<endl;
    pt4.print();
    cout <<"\nearned: "<<pt4.earnings();
    cout <<endl<<endl;

    //Create a vector with pointer employee objects
    vector <Employee*> emp(3);
    emp[0]=&pt2;
    emp[1]=&pt3;
    emp[2]=&pt4;

    cout <<"\nObjects calls with Virtualptr Funct.\n";
    for (size_t i = 0; i < emp.size(); i++) {
        VirtualViaPtr( emp[i] );
    }
    cout <<"\nObjects calls with Virtualref Funct.\n";

    for (size_t i = 0; i < emp.size(); i++) {
        VirtualViaRef( *emp[i] );
    }
}

void VirtualViaPtr(const Employee * const baseptr){
    baseptr->print();
    cout <<"\nEarned $"<<baseptr->earnings()<<endl<<endl;
}
void VirtualViaRef(const Employee& baseref){
    baseref.print();
    cout <<"\nEarned $"<<baseref.earnings()<<endl<<endl;
}
