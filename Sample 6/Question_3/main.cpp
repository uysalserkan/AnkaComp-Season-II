#include <iostream>
#include "IntegerSet.h"
using namespace std;
int main(){
    IntegerSet control1;//125789
    IntegerSet control2;//1259
    IntegerSet control3;
    IntegerSet control4;
    cout <<"Before the insertElement, control1 is: ";
    control1.print();
    control1.insertElement(2);
    control1.insertElement(5);
    control1.insertElement(8);
    control1.insertElement(1);
    control1.insertElement(9);
    control1.insertElement(8);
    control1.insertElement(7);
    control2.insertElement(2);
    control2.insertElement(5);
    control2.insertElement(1);
    control2.insertElement(9);
    cout <<"After the insertElement, control1 is: ";
    control1.print();
    cout <<"After the insertElement, control2 is: ";
    control2.print();
    cout <<"Control1 and Control2 is equal each other: "<<control1.isEqualTo(control2)<<"\n";
    control1.deleteElement(8);
    control1.deleteElement(7);
    cout <<"After delete the numbers  8 and 7: ";
    control2.print();
    cout <<"Control1 and Control2 is equal each other: "<<control1.isEqualTo(control2)<<"\n";
    cout <<"Adding 3 5 and 8 to control2.\n";
    control2.insertElement(3);
    control2.insertElement(5);
    control2.insertElement(8);
    control3=control1.intersectWith(control2);
    cout <<"Intersect control1 and control 2: ";
    control3.print();
    control4=control1.uniteWith(control2);
    cout <<"Unite control1 and control 2: ";
    control4.print();
}
