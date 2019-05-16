#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee{
private:
    string name;
    string surname;
    string socialsecuritynumber;
public:
    Employee(const string&,const string&,const string&);
    void setname(string&);
    string getname()const;
    void setsurname(string&);
    string getsurname()const;
    void setsocialsecuritynumber(string&);
    string getsocialsecuritynumber()const;
    virtual double earnings()const=0;
    virtual void print()const;
};
#endif
