#include <iostream>
#include "Employee.h"
using namespace std;
int main(){
	{
		cout <<"Before the constructor, the count is: "<<Employee::getCount()<<endl;
		Employee x1("Ahmet","Hamdi");
		Employee x2("Safak","Operasyon");
		cout <<"After the constructor, the count is: "<<Employee::getCount()<<endl;
		cout <<"Person 1: "<<x1.getFirstname()<<" "<<x1.getSurname()<<endl<<"Person 2: "
		<<x2.getFirstname()<<" "<<x2.getSurname()<<endl;
	}
	cout <<"After the destructor, the count is: "<<Employee::getCount()<<endl;
}
