#include <iostream>
#include "Time.h"
using namespace std;
int main(){
   Time TheTime;
    cout <<"First time(Standart): ";
    TheTime.PrintStandart();
    cout <<"First time(Universal): ";
    TheTime.PrintUniversal();
    TheTime.SetTime(8,25,25);
    cout <<"After the setting time(Standart): ";
    TheTime.PrintStandart();
    cout <<"After the setting time(Universal): ";
    TheTime.PrintUniversal();
    try{
        TheTime.SetTime(25,61,91);
    }
    catch(invalid_argument &e){
        cout <<"Warning! --->> "<<e.what()<<endl<<endl;
    }
    cout <<"The Time after the misuse the SetTime function. "<<endl;
    cout <<"Standart: ";TheTime.PrintStandart();
    cout <<"Universal: ";TheTime.PrintUniversal();
    cout <<endl<<endl;
}
