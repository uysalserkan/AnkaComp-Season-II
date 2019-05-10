#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <string>
using namespace std;
class Animals{
protected:
    string name;
public:
    virtual string talk()=0;
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};

class Dog:public Animals{
public:
    void setName(string Dn){
        name=Dn;
    }
    string getName(){
        return name;
    }
    string talk(){
        return "Hav Hav.\n";
    }
};


class Bird:public Animals{
public:
    void setName(string Dn){
        name=Dn;
    }
    string getName(){
        return name;
    }
	string talk(){
        return "Cik Cik\n";
    }
};




#endif  //ANIMALS_HPP