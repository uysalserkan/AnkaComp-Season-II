#include <iostream>
#define SIZE 15
using namespace std;
void sortTheArray(int* pt);
void arrYaz(int* pt);
int main(){
	int ar[SIZE]={8,6,9,15,58,4,3,25,91,45,100,186,124,96,33};
    cout <<"Unsorted array is: ";
    arrYaz(ar);
    sortTheArray(ar);
    cout <<"Sorted array is: ";
    arrYaz(ar);
}

void sortTheArray(int* pt){
    int cntr=0,temp;
    for(int k=0;k<2;k++)
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(pt[i]>pt[j]){
                cntr++;
            }
        }
        temp=pt[cntr];
        pt[cntr]=pt[i];
        pt[i]=temp;
        cntr=0;
    }
}
void arrYaz(int* pt){
    for(int i=0;i<SIZE;i++){
        cout <<pt[i]<<" ";
    }
    cout <<endl;
}