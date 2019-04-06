#include <iostream>
#include <cmath>
#include "Rational.h"
#include "RationalSet.h"
using namespace std;
//Rational Functions below here.
Rational::Rational(int a=0,int b=0):x(a),y(b){;}
void Rational::setX(int a){x=a;}
void Rational::setY(int a){y=a;}
int Rational::getX(){return x;}
int Rational::getY(){return y;}
//RationalSet Functions below here.
RationalSet::RationalSet(){
    for (size_t i = 0; i < 10; i++) {
        r[i].setX(NULL);
        r[i].setY(NULL);
    }
}
void RationalSet::insert(Rational ex){
    for (size_t i = 0; i < 10; i++)
        if(r[i].getX()==NULL&&r[i].getY()==NULL){
            r[i].setX(ex.getX());
            r[i].setY(ex.getY());
            break;
        }

}
void RationalSet::delete_rational(Rational ex){
    for (size_t i = 0; i < 10; i++)
        if(r[i].getX()==ex.getX()&&r[i].getY()==ex.getY()){
            r[i].setX(NULL);
            r[i].setY(NULL);
        }
}
int RationalSet::search(Rational ex){
    for (size_t i = 0; i < 10; i++)
        if (r[i].getX()==ex.getX()&&r[i].getY()==ex.getY())
            return i;
        return -1;
}
void RationalSet::print(){
    for (size_t i = 0; i < 10; i++)
        if(r[i].getX()!=NULL&&r[i].getY()!=NULL)
            r[i].print();
}
