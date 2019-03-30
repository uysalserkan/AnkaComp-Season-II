#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Commission.h"
#include "Base.h"
using namespace std;
int main() {
    cout <<fixed<<setprecision(2);
    vector <Employee*>emp(3);
    emp[0]=new SalariedEmployee("Ali","Kirgiz","6,9,2006",1625);
    emp[1]=new Commission("Eysan","Atay","13,7,2008",2100,0.7);
    emp[2]=new Base("Ezel","Bayraktar","25,6,2013",3200,0.9,1800);
    for (size_t i = 0; i < emp.size(); i++) {
        emp[i]->print();
        cout <<endl;
        Base *baseptr=dynamic_cast<Base *>(emp[i]);
        if(baseptr!=0){
            double oldbasesalary=baseptr->getBaseSalary();
            cout <<"Old Base Salary: $"<<oldbasesalary<<endl;
            baseptr->setBaseSalary(1.10*oldbasesalary);
            cout <<"New Base Salary increased with %10: $"<<baseptr->getBaseSalary()<<endl;
        }
        cout <<"Earned: $"<<emp[i]->earnings()<<endl<<endl;
    }
    for (size_t i = 0; i < emp.size(); i++) {
        cout <<"Deleting objects: "<<typeid(*emp[i]).name()<<endl;
        delete emp[i];
    }
}
