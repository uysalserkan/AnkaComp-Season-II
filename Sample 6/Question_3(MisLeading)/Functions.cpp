#include <iostream>
#include "IntegerSet.h"
using namespace std;
IntegerSet::IntegerSet(){
    for (size_t i = 0; i < 10; i++)
        set[i]=0;
}
int getIndexValue(int i){
    return set[i];
}
void IntegerSet::insertElement(int i){
    for (size_t j = 0; j < 10; j++)
        if(set[j]==0)
            set[j]=i
}
void IntegerSet::deleteElement(int i){
    if(i>0&&i<10)
        for (size_t j = 0; j < 10; j++)
            if(set[j]==i)
                set[j]=0;
}
void IntegerSet::print(){
    for (size_t i = 0; i < 10; i++)
        if(set[i]!=0)
            cout <<set[i]<<" ";
    cout <<"\n";
}
bool IntegerSet::isEqualTo(IntegerSet k){
    for (size_t i = 0; i < 10; i++)
        if(k.getIndexValue(i)!=set[i])
            return false;
    return true;
}
IntegerSet IntegerSet::intersectWith(IntegerSet k){

}
IntegerSet IntegerSet::uniteWith(IntegerSet k){

}
