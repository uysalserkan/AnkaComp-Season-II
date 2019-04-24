#ifndef POINT_HPP
#define  POINT_HPP
#include <iostream>
using namespace std;
class Point {
private:
    int x,y;
public:
    Point (int,int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    void print() {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
#endif
