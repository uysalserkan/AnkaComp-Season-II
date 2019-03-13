#include <iostream>
#include <cmath>
using namespace std;
/*
(İki boyutlu bir noktanın x ve y koordinatlarını saklayan bir Point sınıfı tanımlamanız
gerekmektedir. Point sınıfı için yapıcı (constructor), x ve y koordinatlarını girdi olarak almalıdır ve
ilgili veri üyelerine (data members of the class) bu değerleri atamadan önce değerlerin 0’dan büyük
olup olmadığını kontrol etmelidir (Eğer değer 0’dan küçükse o koordinata 0 atanmalıdır).
“distance_from” fonksiyonu, kullanıcıdan alınan nokta ile (0,5) arasındaki nokta arasındaki
mesafeyi hesaplamalıdır. Main fonksiyonunuzda bir Point nesnesi oluşturmalı ve bu nesnenin
koordinatlarını kullanıcıdan almalısınız. Ardından, bu nokta ile (0,5) koordinatındaki noktanın
arasındaki mesafeyi yazdırmak için sınıfın “print” isimli yazdırma fonksiyonu çağırılmalıdır.)
*/
class Point{
private:
	int x,y;
public:
	Point(int x1,int y1){
		if(x1<0)
		x=0;
		else
		x=x1;
		if(y1<0)
		y=0;
		else
		y=y1;
	}
	double distance_from(){
		double dist;
		dist=sqrt((x*x)+(y-5)*(y-5));
		return dist;
	}
	void print(){
		cout <<"The distance the point and (0,5) is: "<<distance_from()<<endl;
	}
};
int main(void){
	int x,y;
	cout <<"Please enter positive two point which are x and y: ";
	cin >>x>>y;
	Point pnt(x,y);
	pnt.print();
}
