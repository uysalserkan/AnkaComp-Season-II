#include <iostream>
#include "Point.h"
using namespace std;
Point::Point(int a=0,int b=0):x(a),y(b){}
void Point::set_x(int a){x=a;}
void Point::set_y(int b){y=b;}
int Point::get_x(){ return x;}
int Point::get_y(){return y;}
void Point::operator()(){
	x=0;
	y=0;
}
Point operator-(const Point& Pt1, const Point& Pt2){
	Point temp;
	temp.x=Pt1.x-Pt2.x;
	temp.y=Pt1.y-Pt2.y;
	return temp;
}
Point operator+(const Point& Pt1, const Point& Pt2){
	Point temp;
	temp.x=Pt1.x+Pt2.x;
	temp.y=Pt1.y+Pt2.y;
	return temp;
}
ostream &operator<<(ostream& out, const Point& Pt){
	out <<"P("<<Pt.x<<" "<<Pt.y<<")"<<endl;
	return out;
}
