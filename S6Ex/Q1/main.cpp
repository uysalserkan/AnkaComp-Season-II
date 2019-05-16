#include <iostream>
#include "Point.hpp"
#include "PointSet.hpp"
using namespace std;
int main(void) {
    PointSet e1;
    e1.print();
    Point s1(3,5);
    Point s2(5,7);
    Point s3(8,2);
    e1.insert(s1);
    e1.print();
    e1.insert(s2);
    e1.insert(s3);
    e1.print();
    cout <<"S2 index is: "<<e1.search(s2)<<endl;
    e1.delete_point(s2);
    cout <<"S2 index is: "<<e1.search(s2)<<endl;

}
