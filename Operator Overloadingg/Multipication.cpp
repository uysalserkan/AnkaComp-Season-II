#include <iostream>
using namespace std;
class Ratio{
private:
	int num,den;
public:
	friend Ratio operator*(const Ratio&a, const Ratio&b );
	Ratio(int a=0, int b=1){
		num=a;
		den=b;
	}
	void yaz(){
		cout <<num <<"-"<<den;
	}
};
Ratio operator*(const Ratio&a, const Ratio&b ){
	Ratio temp;
	temp.num=a.num*b.num;
	temp.den=a.den*b.den;
	return temp;
}
int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	Ratio f3=f1*f2;
	f3.yaz();
}
