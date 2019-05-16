#include <iostream>
#include <vector>
using namespace std;
void SetVector(vector <int> &vect);
void GetVector(vector <int> &vect);
int CheckTheVectors(vector <int> &vect1, vector <int> &vect2);
int main(){
    vector<int> FirstInt(4),SecondInt(6);
    SetVector(FirstInt);
    SetVector(SecondInt);
    GetVector(FirstInt);
    GetVector(SecondInt);
    cout << (CheckTheVectors(FirstInt,SecondInt)?"They are same each other.":"They are not same each other..");
    cout <<endl<<"After the assingment.."<<endl;
    FirstInt=SecondInt;
    GetVector(FirstInt);
    GetVector(SecondInt);
    cout << (CheckTheVectors(FirstInt,SecondInt)?"They are same each other.":"They are not same each other..");
    }

void SetVector(vector <int> &vect){
    for (size_t i = 0; i < vect.size(); i++) {
        cin >>vect.at(i);
    }
}
void GetVector(vector <int> &vect){
    for (size_t i = 0; i < vect.size(); i++) {
        cout <<vect.at(i)<<" - ";
    }
    cout <<endl;
}

int CheckTheVectors(vector <int> &vect1, vector <int> &vect2){
    if(vect1==vect2)
        return 1;
    return 0;
}
