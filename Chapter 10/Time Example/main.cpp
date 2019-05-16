#include <iostream>
#include "Time.h"
using namespace std;
int main() {
	Time s(5,5,5);
	cout <<"Standart: ";
	s.PrintStandart();
	cout <<"Universal: ";
	s.PrintUniversal();
	s.SetHour(18).SetMinute(25).SetSecond(19);
	cout <<"Standart: ";
	s.PrintStandart();
	cout <<"Universal: ";
	s.PrintUniversal();
	s.SetTime(2,25,17);
	cout <<"Standart: ";
	s.PrintStandart();
	cout <<"Universal: ";
	s.PrintUniversal();
}
