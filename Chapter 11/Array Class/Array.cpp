#include <iostream>
#include "Array.h"
using namespace std;
Array::Array(int s){
	if(s<0)
	throw invalid_argument("Yanlis bir deger girdiniz.\n");
	else{
		boyu=s;
		ptr = new int [boyu];
		for (int a=0;a<boyu;a++) {
			ptr[a]=0;
		}
	}

}
Array::Array(){
	boyu=10;
	ptr = new int [boyu];
	for (int a=0;a<boyu;a++) {
		ptr[a]=0;
	}
}
Array::~Array(){
	// cout <<boyu <<" boyutundaki dizi silindi.\n";
}
int Array::getsize(){
	return boyu;
}
int Array::operator[](int a)const{
	if(a<this->boyu && a>=0)
		return ptr[a];
	else
		throw invalid_argument("Yanlis bir deger girdiniz veya boyutu astiniz.!\n");
}
int &Array::operator[](int a){
	if(a<this->boyu && a>=0)
		return ptr[a];
	else
		throw invalid_argument("Yanlis bir deger girdiniz veya boyutu astiniz.!\n");
}
Array::Array(Array& ex){
	*this=ex;
}
ostream &operator<<(ostream& out,const Array& ex){
	for (size_t i = 0; i < ex.boyu; i++) {
		out << ex[i] <<" ";
	}
	out <<endl;
	return out;
}
istream &operator>>(istream& input, Array& ex){
	cout <<"Please enter "<<ex.boyu<<" number: ";
	for (size_t i = 0; i < ex.boyu; i++) {
		input >>ex[i];
	}
	return input;
}
bool Array::operator==(Array& ex){
	if(this->boyu!=ex.boyu)
		return false;
	else{
		for (size_t i = 0; i < ex.boyu; i++,ptr++) {
			if(*ptr!=ex[i])
				return false;
		}
		return true;
	}
}
bool Array::operator!=(Array& ex){
	if(ex.boyu!=this->boyu)
		return true;
		int counter=0;
	for (size_t i = 0; i < ex.boyu; i++,ptr++) {
		if(*ptr==ex[i])
		counter++;
	}
	if(counter=ex.boyu)
		return false;
	return true;
}
