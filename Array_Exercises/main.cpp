#include "Functions.h"
#include <iostream>
using namespace std;
int main() {
    int size=10;
    float Arr[size]={5.5,8.9,5.5,2.1,5.5,6.3,77,7.7,1.2,99.5};
    float a,b;
    cout <<"Min Value in 4 elements: "<<min(Arr,4)<<endl<<"Min Value in 10 elements: "<<min(Arr,size)<<endl;
    cout <<"Min Index in 4 elements: "<<minIndex(Arr,4)+1<<endl<<"Min Index in 10 elements: "<<minIndex(Arr,size)+1<<endl;
    getExtremes(a,b,Arr,size);
    cout <<"Extreme Arr values are: "<<a<<","<<b<<endl;
    largest(a,b,Arr,size);
    cout <<"Two largest value in Arr are: "<<a<<","<<b<<endl;
    cout <<"Before remove function Arr is: \n";
    ArrYaz(Arr,size);
    remove(Arr,size,8);
    cout <<"After remove function Arr is: \n";
    ArrYaz(Arr,size);
    if(removeFirst(Arr,size,5.5)){
    cout <<"5.5 deleted in the Arr and after the arr is: \n";
    ArrYaz(Arr,size);
    }
    else
    cout <<"5.5 cannot deleted.\n";
    cout <<"Before the removeAll function Arr is:\n";
    ArrYaz(Arr,size);
    removeAll(Arr,size,5.5);
    cout <<"After the removeAll function Arr is:\n";
    ArrYaz(Arr,size);
    cout<<"Before positive rotate function Arr is\n";
    ArrYaz(Arr,size);
    rotate(Arr,size,2);
    cout<<"After positive rotate function Arr is\n";
    ArrYaz(Arr,size);
    cout<<"Before negative rotate function Arr is\n";
    ArrYaz(Arr,size);
    rotate(Arr,size,-4);
    cout<<"After negative rotate function Arr is\n";
    ArrYaz(Arr,size);
    int Arr[3][3]={1,2,3,4,5,6,7,8,9};
    ninetyrotate(Arr,3,1);
    // KareMatrixYaz(Arr,3);
}
