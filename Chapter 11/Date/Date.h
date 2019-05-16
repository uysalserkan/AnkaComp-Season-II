#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date{
private:
	int month,day,year;
	static const int days[];
	void HelpIncrement();
public:
	friend ostream& operator <<(ostream&,const Date&);
	Date(int=1,int=1,int=1900);
	void setDate(int=1,int=1,int=1900);
	Date &operator++();
	Date operator++(int);
	const Date operator+=(int);
	static bool lapyear(int);
	bool endOfMonth(int)const;
};
#endif
