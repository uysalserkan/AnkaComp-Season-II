#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
	int X,Y;
public:
	Point(int x1=0, int y1=0):X(x1),Y(y1){

	}
	int getX(){
		return X;
	}
	int getY(){
		return Y;
	}
	void SetXandY(Point p){
		this->X=p.getX();
		this->Y=p.getY();
	}
};
class CiftBoyut{
private:
	Point F,Y;
public:
	CiftBoyut(Point,Point);
	void yaz();
	double hesapla();
};
CiftBoyut::CiftBoyut(Point a,Point b){
	// F.getX() = a.getX();
	// F.getY() = a.getY();
	// Y.getY() = b.getY();
	// Y.getX() = b.getX();
	// F=a;
	// Y=b;
	F.SetXandY(a);
	Y.SetXandY(b);
}
double CiftBoyut::hesapla(){
	double dist;
	dist=sqrt((F.getX()-Y.getX())*(F.getX()-Y.getX())+(Y.getY()-F.getY())*(Y.getY()-F.getY()));
	return dist;
}
void CiftBoyut::yaz(){
	cout <<hesapla()<<endl;
}

int main(int argc, char const *argv[]) {
	Point p1(0,0);
	Point p2(0,5);
	CiftBoyut adana(p1, p2);
	adana.yaz();
}
