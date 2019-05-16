#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
using namespace std;
class BasePlusCommissionEmployee{
private:
	string Name,Surname,SocialSecurityNumber;
	double GrossSales,CommissionRate,BaseSalary;
public:
	BasePlusCommissionEmployee(const string&,const string&,const string&,double=0.0,double=0.0,double=0.0);
	void setName(const string&);
	void setSurname(const string&);
	void setSocialSecurityNumber(const string&);
	void setGrossSales(double);
	void setCommissionRate(double);
	void setBaseSalary(double);
	string getName()const ;
	string getSurname()const ;
	string getSocialSecurityNumber()const ;
	double getGrossSales()const ;
	double getCommissionRate()const ;
	double getBaseSalary()const ;
	double earnings()const;
	void print()const;
};
#endif
