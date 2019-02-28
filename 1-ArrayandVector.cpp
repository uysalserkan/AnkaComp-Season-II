#include <iostream>
#include <iomanip>
#define SIZE 10
using namespace std;
void PrintChard(int Grades[SIZE]);
int main(){
    int ClassGrades[SIZE]={100,25,27,96,68,75,9,2,56,89};
    PrintChard(ClassGrades);
}
void PrintChard(int Grades[SIZE]){
    int i;
    cout <<"|_-_-_-_-_-_-_-_-GRADE CHARD_-_-_-_-_-_-_-_-|\n";
    cout <<"A: ";
    for(i=0;i<SIZE;i++)
        if(Grades[i]>=90)
            cout <<"*";
    cout <<endl<<"B: ";
    for(i=0;i<SIZE;i++)
        if(Grades[i]<90&&Grades[i]>=75)
            cout <<"*";
    cout <<endl<<"C: ";
    for(i=0;i<SIZE;i++)
        if(Grades[i]<75&&Grades[i]>=60)
            cout <<"*";
    cout <<endl<<"F: ";
    for(i=0;i<SIZE;i++)
        if(Grades[i]<60)
            cout <<"*";
}
