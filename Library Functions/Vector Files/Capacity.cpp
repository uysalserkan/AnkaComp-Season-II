#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cout <<boolalpha;
    vector <int> vec;
    cout <<"Vec is empty?: "<<vec.empty()<<endl;
    vec.push_back(2);
    vec.push_back(5);
    cout <<"After adding a number to Vec.\naVec is empty?: "<<vec.empty()<<endl;
    cout <<"Max size of vec: "<<vec.max_size()<<endl;
    cout <<"Capacity of vec: "<<vec.capacity()<<endl;
    cout <<"Vec inside: ";
    for(int a:vec)
    cout <<a<<" ";
    cout <<endl;
    vec.resize(20);
    cout <<"Capacity of vec: "<<vec.capacity()<<endl;
    cout <<"Vec inside: ";
    for(int a:vec)
    cout <<a<<" ";
    cout <<endl;
    vec.clear();
    cout <<"Capacity of vec: "<<vec.capacity()<<endl;
    cout <<"Vec inside: ";
    for(int a:vec)
    cout <<a<<" ";
    cout <<endl;
    vec.shrink_to_fit();
    cout <<"Capacity of vec: "<<vec.capacity()<<endl;
    cout <<"Vec inside: ";
    for(int a:vec)
    cout <<a<<" ";
    cout <<endl;
    vec.reserve(20);
    cout <<"Capacity of vec: "<<vec.capacity()<<endl;
    cout <<"Vec inside: ";
    for(int a:vec)
    cout <<a<<" ";
    cout <<endl;
    return 0;
}
