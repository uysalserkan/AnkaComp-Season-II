#include <iostream>
using namespace std;
class Rect{
private:
	int l,w;

public:
	friend void setvalues(Rect &,int,int);
	Rect(int a=1, int b=1):l(a),w(b){
		cout <<"Constructor created.!\n";
	}
	void Area(){
		cout <<l*w<<" is the area.\n";
	}
};
void setvalues(Rect &ex,int a, int b){
	ex.l=a;
	ex.w=b;
}

int main(){
	Rect hm(3,5);
	hm.Area();
	setvalues(hm,5,5);
	hm.Area();
}
