#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point{
private:
	int x,y;
public:
	Point(int,int);
	void set_x(int);
	void set_y(int);
	int get_x();
	int get_y();
	void operator()();
	friend Point operator-(const Point&, const Point&);
	friend Point operator+(const Point&, const Point&);
	friend ostream &operator<<(ostream&, const Point&);
};
#endif
