#ifndef BASE_H
#define BASE_H
#include "Commission.h"
using namespace std;
#include <string>
class Base:public Commission{
private:
    double BaseSalary;
public:
    Base(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
    void setBaseSalary(double);
    double getBaseSalary()const;
    virtual double earnings()const;
    virtual void print()const;
};
#endif
