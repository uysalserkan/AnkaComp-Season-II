#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;
template <typename T>
void testStack(Stack<T> &theStack,T value,T increment,const string StackName){
    cout <<"Pushing elements onto "<<StackName<<endl;
    while (theStack.push(value)) {
        cout <<value <<" ";
        value+=increment;
    }
    cout <<"\nStack is full you cannot push it anymore: "<<value<<endl;
    cout <<"Popping the elements form "<<StackName<<endl;
    while (theStack.pop(value))
    cout <<value<<" ";
    cout <<"\nThe Stack is empty you cannot pop it anymore.\n";
}
int main(){
    Stack<double> doubleStack(5);
    Stack<int> intStack;
    testStack(doubleStack,1.1,1.1,"doubleStack");
    testStack(intStack,1,1,"intStack");
}
