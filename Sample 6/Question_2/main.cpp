#include <iostream>
#include <cmath>
#include "Rational.h"
#include "RationalSet.h"
using namespace std;
int main() {
    RationalSet control;
    Rational test1(2,5);
    Rational test2(20,50);
    Rational test3(23,51);
    cout <<"Print the control before assing.\n";
    control.print();
    control.insert(test1);
    cout <<"Assign test1 to control.\n";
    control.print();
    control.insert(test2);
    control.insert(test3);
    cout <<"Assign test2 and test3 to control.\n";
    control.print();
    cout <<"Search test1 index in control: "<<control.search(test1)<<endl;
    cout <<"Search test2 index in control: "<<control.search(test2)<<endl;
    cout <<"Search test3 index in control: "<<control.search(test3)<<endl;
    control.delete_rational(test1);
    cout <<"After delete test1 in contorl.\n";
    cout <<"Search test1 index in control: "<<control.search(test1)<<endl;
    control.print();


}
