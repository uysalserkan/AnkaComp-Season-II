#include <iostream>
using namespace std;
class Ratio{
private:
	int num,den;
public:
	 Ratio operator *=(const Ratio& a);
	Ratio(int a=0, int b=1){
		num=a;
		den=b;
	}
	void yaz(){
		cout <<num <<"-"<<den;
	}
};
Ratio Ratio::operator *=(const Ratio& a){
	this->num=this->num*a.num;
	this->den=this->den*a.den;
	return *this;
}
int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	f1*=f2;
	f1.yaz();
}
