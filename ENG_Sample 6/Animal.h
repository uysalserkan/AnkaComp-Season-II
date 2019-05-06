#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal{
	string m_sName;
public:
	Animal(string name):m_sName(name){}
	virtual const char* Sounds() = 0;
	string GetName(){return m_sName;}

};

class Cat : public Animal{
public:
	Cat(string name);
	const char* Sounds();
};

class Dog : public Animal{
public:
	Dog(string name);
	const char* Sounds();
};

class Bird : public Animal{
public:
	Bird(string name);
	const char* Sounds();
};

#endif
