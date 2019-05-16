#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee{
private:
	string firstname, surname;
	static int count;
public:
	Employee(const string&, const string&);
	~Employee();
	string getFirstname()const;
	string getSurname()const;
	static int getCount();
};
#endif
