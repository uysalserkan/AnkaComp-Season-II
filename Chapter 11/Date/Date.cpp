#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
const int Date::days[]={ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
ostream& operator <<(ostream& output ,const Date& d){
	static string monthsname[13]={"","OCAK","SUBAT","MART","NISAN"
	,"MAYIS","HAZIRAN","TEMMUZ","AGUSTOS","EYLUL","EKIM","KASIM","ARALIK"};
	output <<d.day<<" "<<monthsname[d.month]<<" "<<d.year<<endl;
	return output;
}
Date::Date(int d,int m, int y){
	setDate(d,m,y);
}
void Date::setDate(int d, int m, int y){
	if(m>=1&&m<13)
	month=m;
	else
	throw invalid_argument("Aylar 1-12 arasinda olmalidir..!\n");
	if(y>=1900&&y<=2100)
	year=y;
	else
	throw invalid_argument("Yil en az 1900 en fazla 2100 olabilir..!\n");
	if((month==2&&lapyear(year)&&d>=1&&d<=29)||d>=1&&d<=days[month])
	day=d;
	else
	throw invalid_argument("Gun yanlis girildi..!\n");
}
void Date::HelpIncrement(){
	if(!endOfMonth(day))
		day++;
	else{
		if(month<12){
			month++;
			day=1;
		}
		else{
			year++;
			month=1;
			day=1;
		}
	}
}
bool Date::endOfMonth(int d)const{
	if(month==2&&lapyear(year))
		return d==29;
	else
		return d==days[month];
}
bool Date::lapyear(int y){
	if((y%400==0)||(y%100!=0)&&(y%4==0))
		return true;
	return false;
}
Date& Date::operator++(){
	HelpIncrement();
	return *this;
}
Date Date::operator++(int){
	Date temp=*this;
	HelpIncrement();
	return temp;
}
const Date Date::operator+=(int add){
	for(int i=0;i<add;++i){
		HelpIncrement();
	}
	return *this;
}
