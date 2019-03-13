#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;
Date::Date(int mnth, int dy, int yr){
	if(mnth >0 && mnth<=MontsPerYear)
		month=mnth;
	else
		throw invalid_argument("Months must be in 1-12..!\n");
	if(yr<2019&&yr>=1900)
		year=yr;
	else
		throw invalid_argument("Years must be in 1900-2019..!\n");
	day=checkDay(dy);
	cout <<"Date object constructor date is: ";
	print();
	cout <<endl;
}
void Date::print() const {
	cout << day << '.' << month << '.' << year;
}
Date::~Date(){
	cout <<"Date destructor date is: ";
	print();
	cout <<endl;
}
int Date::checkDay(int dy) const {
	static const int DaysPerMonths[MontsPerYear+1]={0,31,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(dy>0&&dy<=DaysPerMonths[month])
		return dy;
	if(month==2&&dy==28&&(year%400==0||year%4==0&&year%100!=0))
		return dy;
	else
		throw invalid_argument("Your day cannot find in the months!\n");
}
