#include <iostream>
#include <cmath>
#include "Point.h"
#include "PointSet.h"
using namespace std;
int main(){
    PointSet control;
    control.print();
    Point test1(3,5);
    Point test2(2,25);
    Point test3(30,05);
    control.insert(test1);
    cout <<"After adding test1.\n";
    control.print();
    control.insert(test2);
    control.insert(test3);
    cout <<"After adding test2 and test3.\n";
    control.print();
    control.delete_point(test2);
    cout <<"After deleting test2.\n";
    control.print();
    cout <<"Searching test2: "<<control.search(test2)<<endl;
    cout <<"Searching test1: "<<control.search(test1)<<endl;
    cout <<"Searching test3: "<<control.search(test3)<<endl;
    control.delete_point(test3);
    control.delete_point(test1);
    cout <<"After delete the test3 and test 1.\n";
    cout <<"Searching test1: "<<control.search(test1)<<endl;
    cout <<"Searching test3: "<<control.search(test3)<<endl;
    cout <<"Trying to print PointSet object.\n";
    control.print();

}