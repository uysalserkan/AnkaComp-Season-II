#include <iostream>
using namespace std;
class Ratio{
private:
	int x,y;
public:
	Ratio &operator+=(Ratio&a){
		this->x *= a.y;
		a.x *= this->y;
		this->x += a.x;
		this->y *= a.y;
		return *this;
	}
	Ratio(int a=0, int b=1){
		x=a;
		y=b;
	}
	void yaz(){
		cout <<x<<"/"<<y<<endl;
	}
};

int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	f1+=(f2);
	f1.yaz();
}
