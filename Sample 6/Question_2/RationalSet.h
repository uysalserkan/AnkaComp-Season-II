#ifndef RATIONASETL_H
#define RATIONASETL_H
#include <iostream>
#include <cmath>
#include "Rational.h"
using namespace std;
class RationalSet{
private:
    Rational r[10];
public:
    RationalSet();
    void insert(Rational);
    void delete_rational(Rational);
    int search(Rational);
    void print();
};
#endif
