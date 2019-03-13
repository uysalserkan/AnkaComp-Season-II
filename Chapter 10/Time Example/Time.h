#ifndef TIME_H
#define TIME_H
class Time{
private:
	int hour,min,sec;
public:
	Time(int,int,int);
	Time &SetTime(int,int,int);
	Time &SetHour(int);
	Time &SetMinute(int);
	Time &SetSecond(int);
	int GetHour() const;
	int GetMinute() const;
	int GetSecond() const;
	void PrintUniversal() const;
	void PrintStandart() const;
};
#endif
