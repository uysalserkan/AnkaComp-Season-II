#ifndef TIME_H
#define TIME_H
class Time{
private:
    int hour,min,second;
public:
    void PrintUniversal();
    void PrintStandart();
    void SetTime(int, int, int);
    Time();
};
#endif
