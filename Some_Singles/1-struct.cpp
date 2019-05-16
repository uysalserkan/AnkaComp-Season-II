#include <iostream>
using namespace std;
struct ogrenci
{
    char name[50],surname[50];
    int age,no;
};
int main(){
    struct ogrenci ali;
    cout <<"Please enter your name: ";
    cin >>ali.name;
    cout <<"Please enter your surname: ";
    cin >>ali.surname;
    cout <<"Please enter your age: ";
    cin >>ali.age;
    cout <<"Please enter your no: ";
    cin >>ali.no;
    cout <<"Your name: "<<ali.name<<"\nYour Surname: "<<ali.surname<<"\nYour age: "<<ali.age<<"\nYour No: "<<ali.no<<endl;
}
//enter your info and show it [with struct]