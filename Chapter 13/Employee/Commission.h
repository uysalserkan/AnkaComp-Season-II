#ifndef COMMISSION_H
#define COMMISSION_H
#include "Employee.h"
#include <string>
using namespace std;
class Commission:public Employee{
private:
    double GrossSale, CommissionRate;
public:
    Commission(const string&,const string&,const string&,double=0.0,double=0.0);
    void setCommissionRate(double);
    double getCommissionRate()const;
    void setGrossSale(double);
    double getGrossSale()const;
    virtual double earnings()const;
    virtual void print()const;
};
#endif
