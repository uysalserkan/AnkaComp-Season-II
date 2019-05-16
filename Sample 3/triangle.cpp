/*
(Sınıf, verilen üçgenin koordinatlarından (her köşe için X ve Y) yan uzunlukları hesaplayan,
“CalculateSideLengths” isimli üye fonksiyonunu çağıran bir yapıcı (constructor) içermelidir.
Yapıcı, CalculateSideLengths işlevinin döndürdüğü değerleri özel veri üyelerine atamalıdır. Main
fonksiyonunuzda bir üçgen nesnesi oluşturmalı ve üçgenin köşe noktalarının koordinatlarını
kullanıcıdan almalısınız. Ardından, üçgenin kenar uzunluklarını yazdırmak için sınıfın “print” isimli
yazdırma fonksiyonu çağırılmalıdır.)
*/

#include <iostream>
#include <cmath>
using namespace std;
class Triangle{
private:
	double a, b, c;
public:
	Triangle();
	Triangle(double, double, double, double, double, double);
	double CalculateSideLengths(double, double, double, double);
	void print();
};
Triangle::Triangle(){
	a=0;b=0;c=0;
}
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3){
	a=CalculateSideLengths(x1,y1,x2,y2);
	b=CalculateSideLengths(x2,y2,x3,y3);
	c=CalculateSideLengths(x3,y3,x1,y1);
}
double Triangle::CalculateSideLengths(double x1, double y1, double x2, double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
void Triangle::print(){
	cout <<"The side lenghts are(X-Y-Z): "<<a<<" "<<b<<" "<<c<<endl;
}

int main(){
	double x1,x2,x3,y1,y2,y3;
	cout <<"Please enter six value of three point (X,Y): ";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	Triangle User(x1,y1,x2,y2,x3,y3);
	User.print();
}
