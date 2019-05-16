#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "CommissionEmployee.h"
using namespace std;
class BasePlus : public CommissionEmployee{
private:
	double BaseSalary;
public:
	BasePlus(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
	void setBaseSalary(double);
	double getBaseSalary()const;
	double earnings()const;
	void print()const;
};
#endif
