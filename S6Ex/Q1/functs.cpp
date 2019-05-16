#include <iostream>
#include "Point.hpp"
#include "PointSet.hpp"
using namespace std;
Point::Point (int a=0,int b=0){
    x=a;
    y=b;
}
void Point::setX(int a){
    x=a;
}
void Point::setY(int b){
    y=b;
}
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}

PointSet::PointSet(){
    for(int i=0; i<10; i++){
        p[i].setX(9999);
        p[i].setY(9999);
    }

}
void PointSet::insert(Point p1){
    for(int i=0; i<10; i++){
        if(p[i].getX()==9999 && p[i].getY()==9999){
            p[i].setX(p1.getX());
            p[i].setY(p1.getY());
            break;
        }
        // else
            // cout<<"Ezel <3 Serkan <3 Tarik\n";
    }
}
void PointSet::delete_point(Point s1) {
        for (int i = 0; i < 10; i++) {
            if(p[i].getX()==s1.getX() && p[i].getY()==s1.getY()){
                p[i].setX(9999);
                p[i].setY(9999);
            }
        }
}
int PointSet::search(Point t1){
    for(int i = 0; i < 10; i++){
        if(p[i].getX()==t1.getX() && p[i].getY()==t1.getY()){
            return i;
        }
    }
    return -1;
}
void PointSet::print(){
    for(int i = 0; i<10; i++){
        if(p[i].getX()!=9999 && p[i].getY()!=9999){
            p[i].print();
        }
    }
}
