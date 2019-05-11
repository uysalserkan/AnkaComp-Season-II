#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
using namespace std;

int main(){
    const int SIZE=6;
    int array[SIZE]={1,2,3,4,5,6};
    vector <int> integers(array,array+SIZE);
    ostream_iterator<int> output(cout," ");

    cout <<"Vector integers contains: ";
    copy(integers.begin(),integers.end(),output);
    cout <<endl;
    cout <<"First Element of integers: "<<integers.front()<<endl
    <<"Last element of integers: "<<integers.back()<<endl;
    
    integers[0]=7;
    integers.at(2)=10;
    integers.insert(integers.begin()+1,22);

    cout <<"Vector integers contains after changes: ";
    copy(integers.begin(),integers.end(),output);
    cout <<endl;
    try{
        integers.at(190)=12332;
    }
    catch(out_of_range& OFR){
        cout <<"\n\nException: "<<OFR.what();
    }
    integers.erase(integers.begin(),integers.begin()+5);
    cout <<endl;
    cout <<"Vector integers contains after changes: ";
    copy(integers.begin(),integers.end(),output);
    cout <<endl;

}