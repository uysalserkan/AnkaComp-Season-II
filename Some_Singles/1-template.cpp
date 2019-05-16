#include <iostream>
using namespace std;
template <typename T>
T MaxValue(T Value1, T Value2, T Value3){
    T Temp = Value1;
    if(Temp<Value2)
        Temp=Value2;
    if(Temp<Value3)
        Temp=Value3;
    return Temp;
}
template <typename RF>
RF Fact(RF value){
    if(value <=1)
    return 1;
    else
    return value*Fact(value-1);
}
int main(){
    cout <<MaxValue(2,10,6)<<endl<<MaxValue(10.1,8.9,3.14)<<endl
    <<MaxValue('A','X','W')<<endl;
    cout <<"Template Recursive Factorial:: Num:3 ->> "<<Fact(3)<<endl
    <<"Template Recursive Factorial:: Num:3.5 ->> "<<Fact(3.5)<<endl;

}
