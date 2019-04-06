#include <iostream>
#include <algorithm>
#include "IntegerSet2.h"
using namespace std;
IntegerSet2::IntegerSet2(){
    for (size_t i = 0; i < 10; i++)
        set[i]=NULL;
}
int IntegerSet2::getIndexValue(int k){
    return set[k];
}
void IntegerSet2::insertElement(int k){
    for (size_t i = 0; i < 10; i++)
        if(set[i]==NULL){
            set[i]=k;
            break;
        }
}
void IntegerSet2::deleteElement(int k){
    size_t i,temp=0;
    for (i = 0; i < 10; i++)
        if(set[i]==k){
            set[i]=NULL;
            break;
    }
    for (i; i < 9; i++) {
        temp=set[i];
        set[i]=set[i+1];
        set[i+1]=temp;
    }
}
void IntegerSet2::print(){
    if(set[0]==NULL)
        cout <<"---";
    else
        for (size_t i = 0; i < 10; i++)
            if(set[i]!=NULL)
                cout <<set[i]<<" ";
    cout <<"\n";
}
bool IntegerSet2::isEqualTo(IntegerSet2 k){
    for (size_t i = 0; i < 10; i++)
        if(set[i]!=k.getIndexValue(i))
            return false;
    return true;
}
void IntegerSet2::sort(){
    for (size_t i = 0; i < sizeof(set)/sizeof(int); i++)
        for (size_t j = 0; j <  sizeof(set)/sizeof(int); j++)
            if(set[j+1]<set[j]&&set[j]!=0&&set[j+1]!=0)
                swap(set[j],set[j+1]);
}
