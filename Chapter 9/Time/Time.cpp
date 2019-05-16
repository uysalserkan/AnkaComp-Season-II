#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(){
    hour=min=second=0;
}
void Time::SetTime(int h, int m, int s){
    if((h>=0&&h<=24)&&(m>=0&&m<=60)&&(s>=0&&s<=60)){
        hour=h;
        min=m;
        second=s;
    }
    else
        throw invalid_argument("Please enter correct time properties..!");
}
void Time::PrintUniversal(){
    cout <<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<second<<endl;
}
void Time::PrintStandart(){
    cout << ((hour == 0 || hour == 12) ? 12 : hour%12)<<":"<<setfill('0')<<setw(2)<<min<<":"<<setw(2)<<second<<" "<<(hour < 12?"AM":"PM")<<endl;
}
