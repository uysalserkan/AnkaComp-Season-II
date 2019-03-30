#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <string>
using namespace std;
class SalariedEmployee : public Employee{
private:
    double weeklysalary;
public:
    SalariedEmployee(const string&,const string&,const string&,double=0.0);
    void setweeklysalary(double);
    double getweeklysalary()const;
    virtual double earnings()const;
    virtual void print()const;
};
#endif
