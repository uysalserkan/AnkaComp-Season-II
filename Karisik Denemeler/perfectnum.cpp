#include <iostream>
using namespace std;
void perfectnumber(int num);
int main(){
    int low,high,sum=0,temp;
    cout <<"Please enter two integer"<<endl;
    cout << "Integer 1: ";
    cin >>low;
    cout << "Integer 2: ";
    cin >>high;
    if(low>high){
        temp=low;
        low=high;
        high=temp;
    }
    for(low;low<high;low++)
        perfectnumber(low);
}
void perfectnumber(int num){
    int i,sum=0;
    for(i=1;i<=num-1;i++)
        if(num%i==0)
            sum=sum+i;
    if(sum==num)
        cout <<num<<" is the perfect number!"<<endl;
}
