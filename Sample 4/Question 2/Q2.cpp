#include <iostream>
using namespace std;
class Appointment{
private:
 int year;
public:
 Appointment(int yr=1900){
 if(yr>1900)
 year=yr;
 else
 yr=1900;
 }
 void printAppointmentYear(){
 cout <<"The Appointment Year is: "<<year<<endl;
 }
};
class Person{
private:
 string name;
 Appointment dateOfAppointment;
public:
 Person(string cname, Appointment cdateOfAppointment)
 {
 name=cname;
 dateOfAppointment=cdateOfAppointment;
 }
 void printInfo(){
 cout<<"The Applicant name is: "<<name<<endl;
 dateOfAppointment.printAppointmentYear();
 }
};
int main(){
	Person ezel("Ali Cengiz Eysan",2019);
	ezel.printInfo();
}
