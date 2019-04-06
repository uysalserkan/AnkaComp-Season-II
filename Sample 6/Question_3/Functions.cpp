#include <iostream>
#include "IntegerSet.h"
using namespace std;
IntegerSet::IntegerSet(){
    for (size_t i = 0; i < 10; i++)
        set[i]=0;
}
void IntegerSet::insertElement(int i){
    set[i]=1;
}
void IntegerSet::deleteElement(int i){
    set[i]=0;
}
void IntegerSet::print(){
    int counter=0;
    for (size_t i = 0; i < 10; i++)
        if(set[i]!=0){
            cout <<i<<" ";
            counter++;
    }
    if(counter==0)
        cout <<"---";
    cout <<"\n";
}
bool IntegerSet::isEqualTo(IntegerSet k){
    for (size_t i = 0; i < 10; i++)
        if(set[i]!=k.set[i])
            return false;
    return true;
}
IntegerSet IntegerSet::intersectWith(IntegerSet k){
    IntegerSet temp;
    for (size_t i = 0; i < 10; i++)
        if(set[i]==1&&k.set[i]==1)
            temp.set[i]=1;
        return temp;
}
IntegerSet IntegerSet::uniteWith(IntegerSet k){
    IntegerSet temp;
    for (size_t i = 0; i < 10; i++)
        if(set[i]==1||k.set[i]==1)
            temp.set[i]=1;
        return temp;
}
