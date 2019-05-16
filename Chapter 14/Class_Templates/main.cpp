#include <iostream>
#include "Stack.h"
using namespace std;
int main(){
    Stack <double> doubleStack(5);
    double doublevalue=1.1;
    cout <<"Pushing elements into the doubleStack!\n";
    while (doubleStack.push(doublevalue)) {
        cout <<doublevalue<<" ";
        doublevalue+=1.1;
    }
    cout <<"\nStack is full.\nPopping elements from Stack..\n";
    while (doubleStack.pop(doublevalue))
        cout <<doublevalue<<" ";

    cout <<"\nStack is empty you cannot pop in it.\n";
    Stack<int> intStack;
    int intvalue=1;
    cout <<"\nPushing element into intStack..\n";
    while (intStack.push(intvalue)) {
        cout <<intvalue<<" ";
        intvalue+=1;
    }
    cout <<"\nintStack is full you cannot push in it!\n";
    cout <<"intStack will be popping..\n";
    while(intStack.pop(intvalue))
        cout <<intvalue<<" ";
    cout <<"intStack is empty now!\n";









}
