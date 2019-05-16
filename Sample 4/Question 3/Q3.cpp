#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
	double x;
	double y;
public:
	Point(double x1=0, double y1=0)
	{
		x=x1;
		y=y1;
	}
	double getX(){
		return x;
	}
	double getY(){
		return y;
	}
};
class Triangle{
private:
	Point a,b,c;
public:
	Triangle(Point p1, Point p2, Point p3){
		a=p1;
		b=p2;
		c=p3;
	}
	double CalculateSideLengths(Point p1,Point p2){
		return sqrt((p1.getX()-p2.getX())*(p1.getX()-p2.getX())+(p1.getY()-p2.getY())*(p1.getY()-p2.getY()));
	}
	void print(){
		cout <<"Bas: "<<a.getX()<<" "<<a.getY()<<endl;
		cout <<"Ortadaki: "<<b.getX()<<" "<<b.getY()<<endl;
		cout <<"Son: "<<c.getX()<<" "<<c.getY()<<endl;
		double u=(CalculateSideLengths(a,b)+CalculateSideLengths(b,c)+CalculateSideLengths(c,a))/2;
		double area=sqrt(u*(u-CalculateSideLengths(a,b))*(u-CalculateSideLengths(b,c))*(u-CalculateSideLengths(a,c)));
		double perimeter = CalculateSideLengths(a,b)+CalculateSideLengths(b,c)+CalculateSideLengths(c,a);
		cout <<"Side Lengths: "<<CalculateSideLengths(a,b)<<" "<<CalculateSideLengths(b,c)<<" "<<CalculateSideLengths(a,c)<<endl<<"Perimeter: "<<perimeter<<endl
		<<"Area: "<<area;
	}
};
int main(){
	Point p1(0,0);
	Point p2(0,5);
	Point p3(5,5);
	Triangle ezel(p1,p2,p3);
	Triangle a(Point(0,0),Point(0,5),Point(5,5));
	ezel.print();
	cout <<endl;
	a.print();
}
