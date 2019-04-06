#ifndef POINTSET_H
#define POINTSET_H
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;
class PointSet{
private:
    Point p[10];
public:
    PointSet();
    void insert(Point);
    void delete_point(Point);
    int search(Point);
    void print();
};
#endif
