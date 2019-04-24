#ifndef POINTSET_HPP
#define POINTSET_HPP
#include <iostream>
#include "Point.hpp"
using namespace std;
class PointSet {
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
