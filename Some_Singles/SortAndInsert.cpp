#include <iostream>
#define SIZE 11
using namespace std;
int loct;
/*
*ilk sort et sonra insert et ve ilk hali
*(insert edilmeden sort edilmiş hali) ile ikinci halini bastır
*/
void SortAndInsert(int Arr[SIZE],int key);
void SetValues(int Arr[SIZE]);
void GetValues(int Arr[SIZE]);
int main(void){
    int value;
    int myArr[SIZE];
    GetValues(myArr);
    cout <<"Please enter your value: ";
    cin >> value;
    SortAndInsert(myArr,value);
    SetValues(myArr);
}
void GetValues(int Arr[SIZE]){
    for(int i=0;i<SIZE-1;i++){
        cin >>Arr[i];
    }
}
void SetValues(int Arr[SIZE]){
    for(int i=0;i<SIZE;i++)
    cout <<Arr[i]<<" - ";
    cout <<endl;
}
void SortAndInsert(int Arr[SIZE],int key){
    int temp;
    Arr[10]=key;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE-1;j++)
            if(Arr[j]>Arr[j+1]){
                temp=Arr[j+1];
                Arr[j+1]=Arr[j];
                Arr[j]=temp;
            }
    }
    for(int i=0;i<SIZE;i++)
    if(key==Arr[i]){
        loct=i;
        break;
    }
    for(int i=0;i<SIZE;i++){
        if(i==loct)
        continue;
        cout <<Arr[i]<<" - ";
    }
    cout <<endl;
}
//  3 7 2 1 9 6 11 8 6 5
