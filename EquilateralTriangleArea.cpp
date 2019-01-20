#include <iostream>
#include <math.h>
using namespace std;
double area(double);
int main(){
    double x1;
    cout <<"Please enter one side dimesion: ";
    cin>>x1;
    cout <<"Your area is: "<<area(x1)<<endl;
    system("pause");
}
double area(double dimesion){
  double area;
  area = dimesion*dimesion*sqrt(3)/4;
  return area;
}