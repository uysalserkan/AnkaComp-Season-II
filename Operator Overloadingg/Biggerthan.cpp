#include <iostream>
using namespace std;
class Ratio{
private:
	int x,y;
public:
	friend bool operator>(Ratio&a, Ratio&b );
	Ratio(int a=0, int b=1){
		x=a;
		y=b;
	}
};
bool operator>(Ratio&a, Ratio&b ){
	if((a.x*b.y)>(a.y*b.x))
		return true;
	return false;
}
int main(){
	Ratio f1(1,3);
	Ratio f2(2,6);
	cout << (f1>f2?"Yes":"No")<<endl;
}
