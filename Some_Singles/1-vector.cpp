#include <iostream>
#include <vector>
using namespace std;
void vector1();
int main(void){
vector1();
}
void vector1(){
    vector<int> FirstVector(6);
    for (size_t i = 0; i < 5; i++) {
        FirstVector[i]=(i+1)*3;
    }
    for (size_t i = 0; i < 6; i++) {
        cout <<FirstVector[i]<<" ";
    }
    cout <<endl;
FirstVector.reserve(3);
    for (size_t i = 0; i < 6; i++) {
        cout <<FirstVector[i]<<" ";
    }
        cout <<endl<<FirstVector.capacity()<<" "<<FirstVector.size()<<endl;
}
