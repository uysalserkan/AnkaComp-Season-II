#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
Time::Time(int h, int m, int s){
    SetTime(h,m,s);
}
void Time::SetTime(int h, int m, int s){
    SetHour(h);
    SetMinute(m);
    SetSecond(s);
}
void Time::SetHour(int h){
    if(h>=0&&h<=24)
        hour=h;
    else
        throw invalid_argument("Hours must be minimum 0 or maximum 12!\n");
}
void Time::SetMinute(int m){
    if(m>=0&&m<=60)
        minute=m;
    else
        throw invalid_argument("Minutes must be minimum 0 or maximum 60!\n");
}
void Time::SetSecond(int s){
    if(s<=60&&s>=0)
        second=s;
    else
        throw invalid_argument("Seconds must be minimum 0 or maximum 60!\n");
}
int Time::GetHour(){
    return hour;
}
int Time::GetMinute(){
    return minute;
}
int Time::GetSecond(){
    return second;
}
void Time::Standart(){
    cout << ( ( GetHour() == 0 || GetHour() == 12 ) ? 12 : GetHour() % 12 )<< ":" << setfill( '0' )
    << setw( 2 ) << GetMinute()<< ":" << setw( 2 ) << GetSecond() << ( hour < 12 ? " AM" : " PM" );
}
void Time::Universal(){
    cout << setfill( '0' ) << setw( 2 ) << GetHour() << ":"<< setw( 2 ) << GetMinute() << ":" << setw( 2 ) << GetSecond();
}
