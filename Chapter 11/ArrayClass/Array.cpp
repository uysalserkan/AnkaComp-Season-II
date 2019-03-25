#include <iostream>
#include <vector>
#include "Array.h"
using namespace std;
Array::Array(int s=10){
	if (s>0) {
		size=s;
		ptr = new int [size];
		cout <<"The array was occured.\n";
	}
	else{
		cout <<"Your size cannot be negative.!\n";
	}
}
Array::Array(Array& ex){
	*this=ex;
}
Array::~Array(){
	cout <<"The array will be detemined.\n";
}
bool Array::operator!=(Array& ex){
	if(*this!=ex)
		return true;
	return false;
}
bool Array::operator==(Array& ex){
	if(*this==ex)
		return true;
	return false;
}
Array &Array::operator=(Array& ex){
	*this=ex;
	return *this;
}
ostream &operator<<(ostream& output,const Array& ex){
	for(int a:size){
		output <<a<<" ";
	}
	return output;
}
istream &operator>>(istream& input,Array& ex){
	cout << size;
	// for (size_t i = 0; i < size; i++) {
	// 	input >>ex[i];
	// }
	 return input;
}
int Array::operator[](int a)const{
	if(a<size){
		return ptr[a];
	}
	else
		throw invalid_argument("Boyle bir deger yok, lutfen degerinizi kontrol ediniz..\n");
}
int &Array::operator[](int a){
	if(a<size){
		return ptr[a];
	}
	else
		throw invalid_argument("Boyle bir deger yok, lutfen degerinizi kontrol ediniz..\n");
}
int Array::getSize(){
	return size;
}
