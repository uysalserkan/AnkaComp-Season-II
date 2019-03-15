#include <iostream>
using namespace std;
class BirhtOfDate{
private:
 int year;

public:
 BirhtOfDate (int x=1900){
 if(x>=1900)
 	year=x;
else
	year=1900;
 }
 void printDate(){
 cout <<"The birthday is: "<<year<<endl;
 }
};
class Person{
private:
 string name;
 BirhtOfDate dateOfBirth;
public:
 Person(string cname, BirhtOfDate cdateOfBirth)
 {
 name=cname;
 dateOfBirth=cdateOfBirth;
 }
 void printInfo(){
 cout <<"Name: "<<name<<endl;
 dateOfBirth.printDate();
 }
};
int main(){
	cout <<"The person will be create..."<<endl;
	Person ezel("Ali Cengiz Eysan",2003);
	ezel.printInfo();
}
