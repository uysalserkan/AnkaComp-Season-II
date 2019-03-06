#include "Copy-Constructor.h"
#include <iostream>
using namespace std;
int main(void) {
    Vector2D f1(2,5);
    Vector2D f2(f1);
    cout <<"F1 x and y: "<<f1.getX()<<" "<<f1.getY()<<endl;
    cout <<"F2 x and y: "<<f2.getX()<<" "<<f2.getY()<<endl;
    f1.setX(5);
    f1.setY(10);
    cout <<"After Setting the F1 Vector2D"<<endl;
    cout <<"F1 x and y: "<<f1.getX()<<" "<<f1.getY()<<endl;
    cout <<"F2 x and y: "<<f2.getX()<<" "<<f2.getY()<<endl;
    return 0;
}
//compile with Copy-Constructor.cpp
