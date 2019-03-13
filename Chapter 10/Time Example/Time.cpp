#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;
Time::Time(int hr=0,int mn=0, int sc=0){
	SetTime(hr,mn,sc);
}
Time &Time::SetTime(int h, int m, int s){
	SetHour(h);
	SetMinute(m);
	SetSecond(s);
	return *this;
}

Time &Time::SetHour(int h){
	if(h>=0&&h<24)
		hour=h;
	else
		throw invalid_argument("Hours must be between 0-24!\n");
	return *this;
}
Time &Time::SetMinute(int m){
	if(m>=0&&m<60)
		min=m;
	else
		throw invalid_argument("Minutes must be between 0-60!\n");
	return *this;
}
Time &Time::SetSecond(int s){
	if(s>=0&&s<60)
		sec=s;
	else
		throw invalid_argument("Seconds must be between 0-60!\n");
	return *this;
}
int Time::GetHour()const{
	return hour;
}
int Time::GetSecond()const{
	return sec;
}
int Time::GetMinute()const{
	return min;
}
void Time::PrintUniversal()const{
	cout <<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
}
void Time::PrintStandart()const{
	cout <<  ( (hour ==0 || hour ==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<min<<":"<<setw(2)<<sec<<(hour>12?"PM":"AM")<<endl;
}
