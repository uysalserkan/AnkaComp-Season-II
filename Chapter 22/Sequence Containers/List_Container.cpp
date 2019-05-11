#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T> void printList(const list<T>&listRef);

int main(){
    const int SIZE=4;
    int array[SIZE]={2,6,4,8};
    list<int> values;
    list<int>otherValues;

    values.push_front(1);
    values.push_front(2);
    values.push_back(4);
    values.push_back(3);

    cout <<"Values contains: ";
    printList(values);

    values.sort();
    cout <<"\nAfter sorting values: ";
    printList(values);

    otherValues.insert(otherValues.begin(),array,array+SIZE);
    cout <<"\nAfter insert, otherValues contains: ";
    printList(otherValues);

    values.splice(values.end(),otherValues);
    cout <<"\nAfter splice, values contains: ";
    printList(values);

    values.sort();
    cout <<"\nAfter sorting values contains: ";
    printList(values);

    otherValues.insert(otherValues.begin(),array,array+SIZE);
    otherValues.sort();
    cout <<"\nAfter insert and sorting otherValues contains: ";
    printList(otherValues);

    values.merge(otherValues);
    cout <<"\nAfter merge values contains: ";
    printList(values);
    cout <<"\nother values contains: ";
    printList(otherValues);
// remove,swap,pop_front,pop_back and more..
}

template <typename T> void printList(const list<T>& listRef){
    if(listRef.empty()){
        cout <<"List is Empty!\n";
    }
    else{
        ostream_iterator<T> output(cout, " ");
        copy(listRef.begin(),listRef.end(),output);
    }
}