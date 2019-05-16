#include <iostream>
#include <algorithm>
#include "IntegerSet2.h"
using namespace std;
int main(){
    IntegerSet2 control1;
    IntegerSet2 control2;
    cout <<"Before the insert elements, contorl1 is: ";
    control1.print();
    control1.insertElement(2);
    control1.insertElement(5);
    control1.insertElement(7);
    control1.insertElement(8);
    control1.insertElement(1);
    control2.insertElement(2);
    control2.insertElement(5);
    control2.insertElement(7);
    control2.insertElement(8);
    control2.insertElement(1);
    control1.insertElement(9);
    cout <<"After the insert elements, contorl1 is: ";
    control1.print();
    cout <<"Check control1 and control2 is equal each other: "<<control1.isEqualTo(control2)<<"\n";
    control1.deleteElement(9);
    cout <<"After delete number 9, contorl 1 is: ";
    control1.print();
    cout <<"Check control1 and control2 is equal each other: "<<control1.isEqualTo(control2)<<"\n";
    cout <<"Before sorting control 1: ";
    control1.print();
    control1.sort();
    cout <<"After sorting control 1: ";
    control1.print();
}
