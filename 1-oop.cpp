#include <iostream>
#include "string.h"
using namespace std;
class exams{
    int final=0;
    int midterm=0;
public:
    void pass(){
        if(final+midterm>=60)
            cout <<"Passed the class!!"<<endl;
        else
            cout <<"Failed the class, please take the lessons again!"<<endl;
    }
    exams(int fin, int mid){
        midterm=mid;
        final=fin;
        pass();
    }
};
class person1{
    string name;
    string surname;
    int age;
    float height;
    float weight;

public:
    person1(){
        cout <<"Yapici fonksiyon cagirildi.!"<<endl;
    }
    void instr();
    void inint();
    void yazdir();
    ~person1(){
        cout <<"Yikici fonksiyon cagirildi.!"<<endl;
    }
};
void person1::inint(){
    cout <<"-----------------The-Integer-Inputs-----------------"<<endl;
    cout << "Enter user age: ";
    cin >>age;
    cout << "Enter user height: ";
    cin >>height;
    cout << "Enter user weight: ";
    cin >>weight;
}
void person1::instr(){
        cout <<"-----------------The-String-Inputs-----------------"<<endl;
        cout <<"Enter user name: ";
        cin >>name;
        cout << "Enter user surname: ";
        cin >>surname;
    }
void person1::yazdir(){
    cout <<"Name\tSurname\tAge\tHeight\tWeight"<<endl;
    cout <<name;
    cout <<" \t"<<surname;
    cout <<" \t"<<age;
    cout <<" \t"<<height;
    cout <<" \t"<<weight;
    cout <<endl;
}
int main(){
    person1 serkan;
    serkan.instr();
    serkan.inint();
    serkan.yazdir();
    serkan.exams(50,51);
}
//Simple inputs: serkan uysal 21 182 76
