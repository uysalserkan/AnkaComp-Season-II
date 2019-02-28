#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;
int main(){
    Time t1;
    Time t2(2);
    Time t3(2,25);
    Time t4(2,25,8);
    cout <<"Time 1(Standart): ";
    t1.Standart();
    cout <<endl;
    cout <<"Time 1(Universal): ";
    t1.Universal();
    cout <<endl;
    cout <<"Time 2(Standart): ";
    t2.Standart();
    cout <<endl;
    cout <<"Time 2(Universal): ";
    t2.Universal();
    cout <<endl;
    cout <<"Time 3(Standart): ";
    t3.Standart();
    cout <<endl;
    cout <<"Time 3(Universal): ";
    t3.Universal();
    cout <<endl;
    cout <<"Time 4(Standart): ";
    t4.Standart();
    cout <<endl;
    cout <<"Time 4(Universal): ";
    t4.Universal();
    cout <<endl;
}
