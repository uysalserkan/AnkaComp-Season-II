#ifndef TIME_H
#define TIME_H
class Time{
private:
    int hour,minute,second;
public:
    Time(int=0,int=0,int=0);
    void SetTime(int, int, int);
    void SetMinute(int);
    void SetHour(int);
    void SetSecond(int);
    int GetHour();
    int GetSecond();
    int GetMinute();
    void Universal();
    void Standart();
};
#endif
