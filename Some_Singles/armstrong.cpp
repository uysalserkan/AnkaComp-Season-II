#include <iostream>
using namespace std;
void armstrong(int num);
int main(void){
    int i;
    for(i=100;i<999;i++)
        armstrong(i);
}
void armstrong(int num){
    int temp;
    temp=num;
    int i,j,k;
    i=temp%10;
    temp /=10;
    j=temp%10;
    temp /=10;
    k=temp%10;
    i=i*i*i;
    j=j*j*j;
    k=k*k*k;
    if(i+j+k==num)
        cout <<num<<" is armstrong number!"<<endl;
}
