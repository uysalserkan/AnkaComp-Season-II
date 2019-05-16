#include <iostream>
using namespace std;
template <typename T>
void PrintArray(const T* const Array,int count){
    for (size_t i = 0; i < count; i++)
        cout <<Array[i]<<" ";
    cout <<endl;
}
int main() {
    int aCount=5;
    int bCount=6;
    int cCount=10;
    int a[aCount]={1,2,3,4,5};
    double b[bCount]={1.1,2.2,3.3,4.4,5.5,6.6};
    char c[cCount]="SayMyName!";
    cout <<"Arra a contains: "<<endl;
    PrintArray(a,aCount);
    cout <<"Arra b contains: "<<endl;
    PrintArray(b,bCount);
    cout <<"Arra c contains: "<<endl;
    PrintArray(c,cCount);
}
