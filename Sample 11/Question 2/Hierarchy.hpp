#ifndef HIERARCHY_HPP
#define HIERARCHY_HPP
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string fName,sName,position;
	int birthYear,id;
	double salary;
public:
	Employee(string f,string s,string p,int birth,int ident,double sal):fName(f),sName(s),position(p),birthYear(birth),id(ident),salary(sal){
		;
	}
	friend ostream& operator<<(ostream&,Employee);
};

class UniversityMember:public Employee{
public:
	UniversityMember(string f,string s,string p,int birth,int ident,double sal):Employee(f,s,p,birth,ident,sal){
		;
	}
};

ostream& operator<<(ostream& out,Employee p1){
	out <<"First Name: "<<p1.fName<<endl<<"Second Name: "<<p1.sName<<endl
	<<"Birth Day: "<<p1.birthYear<<endl<<"Salary: "<<p1.salary<<endl
	<<"Position: "<<p1.position<<endl<<"Registary Number: "<<p1.id<<endl;
	return out;
}
#endif //H0IERARCHY_HPP