#include <iostream>
using namespace std;
int TakeFibonacci(int num);
int main(void){
    int number;
    cout <<"Please enter the number: ";
    cin >> number;
    cout << "Your number is: "<<number<<endl<< "Fibonacci number is: "<< TakeFibonacci(number)<<endl;
}
int TakeFibonacci(int num){
    if(num==1 || num==0)
        return num;
    return TakeFibonacci(num-1) + TakeFibonacci(num-2);
}