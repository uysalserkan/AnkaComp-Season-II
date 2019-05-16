#include <iostream>
#include <cmath>
#include "Point.h"
#include "PointSet.h"
using namespace std;
//Point Class Functions below here..
Point::Point(int a=0,int b=0):x(a),y(b){;}
void Point::setX(int a){x=a;}
void Point::setY(int a){y=a;}
int Point::getX(){return x;}
int Point::getY(){return y;}

//PointSet Class Functions below here..
PointSet::PointSet(){
    for (size_t i = 0; i < 10; i++) {
        p[i].setX(NULL);
        p[i].setY(NULL);
    }
}
int PointSet::search(Point ex){
    int ex_x=ex.getX();
    int ex_y=ex.getY();
    for (size_t i = 0; i < 10; i++)
        if(p[i].getX()==ex_x&&p[i].getY()==ex_y)
            return i;
    return -1;
}
void PointSet::insert(Point ex){
    for (size_t i = 0; i < 10; i++) {
        if(p[i].getX()==NULL&&p[i].getY()==NULL){
            p[i].setX(ex.getX());
            p[i].setY(ex.getY());
            break;
        }
    }
}
void PointSet::delete_point(Point ex){
    for (size_t i = 0; i < 10; i++) {
        if (p[i].getX()==ex.getX()&&p[i].getY()==ex.getY()) {
            p[i].setX(NULL);
            p[i].setY(NULL);
        }
    }
}
void PointSet::print(){
    for (size_t i = 0; i < 10; i++)
        if(p[i].getX()!=NULL&&p[i].getY()!=NULL)
            p[i].print();
}
