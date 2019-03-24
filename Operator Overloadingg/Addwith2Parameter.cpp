#include <iostream>
using namespace std;
class Ratio{
private:
	int x,y;
public:
	friend Ratio operator+(Ratio const &, Ratio const &);
	Ratio(int a=0, int b=1){
		x=a;
		y=b;
	}
	void yaz(){
		cout <<x<<"/"<<y<<endl;
	}
};
Ratio operator+(Ratio const &first, Ratio const &second){
	Ratio temp;
	temp.x=first.x*second.y+first.y*second.x;
	temp.y=first.y*second.y;
	return temp;
}
int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	Ratio f3;
	f3=f1+f2;
	f3.yaz();
}
