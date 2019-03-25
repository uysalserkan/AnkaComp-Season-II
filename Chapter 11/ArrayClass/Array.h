#ifndef ARRAY_H
#define ARRAY_H
class Array{
private:
	int size;
	int *ptr;
public:
	int getSize();
	friend ostream &operator<<(ostream&,const Array&);
	friend istream &operator>>(istream&,Array&);
	int operator[](int)const;
	int &operator[](int);
	bool operator!=(Array&);
	bool operator==(Array&);
	Array &operator=(Array&);
	Array(Array&);
	Array(int);
	~Array();
};

#endif

/*
TODO: cout overloading
TODO: cin overloading
TODO: inequality overloading
TODO: equality overloading
TODO: invoke copy constructor
TODO: constructor
TODO: destructor
TODO: Assignment overloading
TODO: Subscripty overloading
TODO:
*/
