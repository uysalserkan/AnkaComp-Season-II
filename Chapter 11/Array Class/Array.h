#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;
class Array{
private:
	int boyu;
	int *ptr;
public:
	Array(int);
	Array();
	int getsize();
	~Array();
	Array(Array&);
	bool operator==(Array&);
	bool operator!=(Array&);
	int operator[](int)const;
	int &operator[](int);
	friend ostream &operator<<(ostream&,const Array&);
	friend istream &operator>>(istream&,Array&);
};
#endif
