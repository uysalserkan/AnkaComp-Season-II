#ifndef DATE_H
#define DATE_H
class Date{
private:
	int month,day,year;
	int checkDay(int) const;
public:
	static const int MontsPerYear=12;
	void print()const;
	Date(int =1, int=1, int=1900);
	~Date();
};
#endif
