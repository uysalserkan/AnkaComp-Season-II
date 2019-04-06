#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;
class Rational{
private:
    int x,y;
public:
    Rational(int,int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void print(){
        cout <<x<<"/"<<y<<endl;
    }
};
#endif
