#include <iostream>
using namespace std;
class Ratio{
private:
	int x,y;
public:
	friend bool operator>=(const Ratio&a, const Ratio&b );
	Ratio operator+(const Ratio&ex);
	void yaz(){ cout <<x<<"/"<<y<<endl;}
	Ratio(int a=0, int b=1){
		x=a;
		y=b;
	}
};
bool operator>=(const Ratio&a,const Ratio&b ){
	if((a.x*b.y)>=(a.y*b.x))
		return true;
	return false;
}
Ratio Ratio::operator+(const Ratio&ex){
	Ratio a;
	a.x=x*ex.y+y*ex.x;
	a.y=ex.y*y;
	return a;
}
int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	Ratio f3;
	f3=f1+f2;
	f3.yaz();
	// cout << (f1>=f2?"Yes":"No")<<endl;
}
