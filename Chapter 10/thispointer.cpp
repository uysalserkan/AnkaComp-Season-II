#include <iostream>
using namespace std;
class Rect{
private:
	int l,w;
public:
	void print()const;
	Rect(int,int);
	~Rect();
};
void Rect::print()const{
	cout <<"Area is "<<(this->l)*(this->w)<<endl;
}
Rect::Rect(int a=1,int b=1):l(a),w(b){
	cout <<"Constructor was created with this numbers >> "<<this->l<<" - "<<this->w<<endl;
}
Rect::~Rect(){
	cout <<"Destructor was called on this items >> "<<this->l<<" - "<<this->w<<endl;
}
int main(){
	Rect a(1,5);
	a.print();
}
