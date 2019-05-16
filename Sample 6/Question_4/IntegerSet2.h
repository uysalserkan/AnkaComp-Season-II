#ifndef INTEGERSET2_H
#define INTEGERSET2_H
#include <iostream>
using namespace std;
class IntegerSet2{
private:
    int set[10];
public:
    IntegerSet2();
    int getIndexValue(int k);
    void insertElement(int k);
    void deleteElement(int k);
    void print();
    bool isEqualTo(IntegerSet2 k);
    void sort();
};
#endif
