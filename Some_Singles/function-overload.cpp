#include <iostream>
using namespace std;
int add(int,int);
float add(double,double);

int main(){
    cout <<add(3,6)<<endl;
    cout<<add(3.5,6.5)<<endl;
}
int add(int x,int y){
    cout << "int called: ";
    return x+y;
}
float add(double x1,double y1){
    cout <<"float called: ";
    return x1+y1;
}
