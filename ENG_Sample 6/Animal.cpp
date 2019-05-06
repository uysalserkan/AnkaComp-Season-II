#include <iostream>
#include "Animal.h"
using namespace std;

Cat::Cat(string name):Animal(name){}

Dog::Dog(string name):Animal(name){}

const char* Cat::Sounds(){
	return "Miyav";
}

const char* Dog::Sounds(){
	return "Hav";
}

Bird::Bird(string name):Animal(name){}

const char* Bird::Sounds(){
	return "Cik Cik";
}

