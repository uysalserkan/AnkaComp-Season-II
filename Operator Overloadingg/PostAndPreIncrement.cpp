#include <iostream>
using namespace std;
class Value{
private:
	int val;
public:
	Value(int v=0){
		val=v;
	}
	Value &operator++(){
		this->val++;
		return *this;
	}//
	Value operator++(int dummy){
		Value temp;
		temp=*this; //i++
		++(*this);
		return temp;
	}
	int getValue(){
		return val;
	}
};
int main(int argc, char const *argv[]) {
	Value v1(3);
	Value v2(3);
	cout <<"Value 1\t\t:"<<v1.getValue()<<endl;
	cout <<"Value 2 (post)\t:"<<(v1++).getValue()<<endl;
	// cout <<"Value 4 \t:"<<v1.getValue()<<endl;
	cout <<"Value 3 (pre)\t:"<<(++v2).getValue()<<endl;
	return 0;
}
//a*=b
