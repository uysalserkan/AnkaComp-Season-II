#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <string>
using namespace std;
class CommissionEmployee{
protected:
	string Name;
	string Surname;
	string SocialSecurityNumber;
	double GrossSales;
	double CommissionRate;
public:
	CommissionEmployee(const string&,const string&,const string&,double=0.0,double=0.0);
	void setName(const string&);
	void setSurname(const string&);
	void setSocialSecurityNumber(const string&);
	void setGrossSales(double);
	void setCommissionRate(double);
	string getName();
	string getSurname();
	string getSocialSecurityNumber();
	double getGrossSales();
	double getCommissionRate();
	double earnings()const;
	void print()const;
};
#endif
