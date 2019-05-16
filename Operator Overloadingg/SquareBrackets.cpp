#include <iostream>
using namespace std;
class Array{
private:
	int size;
	int *arr;
public:
	int operator[](int s)const {
		if(s<size)
			return arr[s];
		else
			throw invalid_argument("Boyle bir deger yok!\n");
	}
	int &operator[](int s){
		if(s<size)
			return arr[s];
		else
			throw invalid_argument("Boyle bir deger yok!\n");
	}
	Array(int s=10){
		if(s>0){
			size=s;
			arr = new int [size];
		}
		else
			throw invalid_argument("Yanlis index sayisi girdiniz.\n");
		for (size_t i = 0; i < size; i++) {
			arr[i]=0;
		}
	}
	void yaz(){
		size_t i;
		for (i = 0; i < size; i++) {
			cout <<arr[i]<<" ";
			if((i+1)%4==0)
				cout <<endl;
		}
		if(i%4!=0)
			cout<< endl;
	}

};
int main(){
	Array myArr(5);
	myArr[1]=5;
	cout << myArr[1]<<endl;
	myArr.yaz();
}
