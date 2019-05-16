#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h"
using namespace std;
class Employee{
private:
	string firstname,secondname;
	const Date BirthDay;
	const Date HireDay;
public:
	Employee(const string &, const string &, const Date &, const Date &);
	void print() const;
	~Employee();
};
#endif
