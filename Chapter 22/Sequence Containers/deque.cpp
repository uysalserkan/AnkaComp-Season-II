#include <iostream>
#include<deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    deque<double> values;
    ostream_iterator<double> output(cout," ");

    values.push_front(2.3);
    values.push_front(5.2);
    values.push_back(3.6);
    cout <<"values contains: ";
    for (size_t i = 0; i < values.size(); i++){
        cout <<values[i]<<" ";
    }

    values.pop_front();
    cout <<"\nAfter pop_front(), values contains: "; 
    copy(values.begin(),values.end(),output);

    values[1]=5.3;
    cout <<"\nAfter assignment, values contains: "; 
    copy(values.begin(),values.end(),output);
    cout <<endl;
}