#include "Functions.h"
#include <iostream>
#include <algorithm>
using namespace std;
void KareMatrixYaz(int a[3][3],int n){
    int counter=0;
    for (size_t i = 0; i < n; i++) {
        for(size_t j=0;j<n;j++){
            ++counter;
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
}
void ArrYaz(float a[],int n){
    for (size_t i = 0; i < n; i++) {
        cout <<a[i]<<" ";
    }
    cout <<endl;
}
float min(float a[], int n){
    float min=a[0];
    for (size_t i = 0; i < n; i++)
        if(min>a[i])
            min=a[i];
    return min;
}
int minIndex(float a[],int n){
    int index=0;
    float min=a[0];
    for (size_t i = 0; i < n; i++)
        if(min>a[i]){
            min=a[i];
            index=i;
        }
    return index;
}
void getExtremes(float& min,float& max,float a[],int n){
    float temp=a[0];
    for (size_t i = 0; i < n; i++) {
        if(temp>a[i])
            temp=a[i];
    }
    min=temp;
    for (size_t i = 0; i < n; i++) {
        if(temp<a[i])
            temp=a[i];
    }
    max=temp;
}
void largest(float& max1, float& max2, float a[], int n){
    float temp1=a[0],temp2=a[0];
    for (size_t i = 0; i < n; i++)
        if(temp1<a[i])
            temp1=a[i];

    max1=temp1;
    for (size_t i = 0; i < n; i++)
        if(temp2<a[i] && a[i]!=temp1)
            temp2=a[i];

    max2=temp2;
}
void remove(float a[],int& n,int i){
    for (size_t j = i-1; j < n-1; j++) {
        a[j]=a[j+1];
    }
    n--;
}
bool removeFirst(float a[],int& n,float x){
    for (size_t i = 0; i < n; i++) {
        if(x==a[i]){
            for (size_t j = i; j < n-1; j++) {
                a[j]=a[j+1];
            }
            n--;
            return true;
        }
    }
    return false;
}
void removeAll(float a[],int& n,float x){
    for (size_t i = 0; i < n; i++) {
        if(a[i]==x){
            for (size_t j = i; j < n-1; j++) {
                a[j]=a[j+1];
            }
            i--;
            n--;
        }
    }
}
void rotate(float a[],int n,int k){
    float temp;
    if(k>0){
        for (size_t j = 0; j < k; j++)
        for (size_t i = 0; i < n-1; i++) {
            temp=a[i+1];
            a[i+1]=a[0];
            a[0]=temp;
        }
    }
    if(k<0){
        for (size_t j = 0; j < -k; j++)
        for (size_t i = n-1; i > 0; i--) {
            temp=a[i-1];
            a[i-1]=a[n-1];
            a[n-1]=temp;
        }
    }
}
void append(float a[],int m,int b[],int n){
    for (size_t i = 0; i < n; i++)
        a[++m]=b[i];
}
void insert(float a[],int& n,float x){
    a[++n]=x;
    sortArr(a,n);
}
int frequency(float a[],int n,int x){
    int counter=0;
    for (size_t i = 0; i < n; i++)
    if(a[i]==x)
    counter++;
    return counter;
}
void sortArr(float a[],int size){
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size-1; j++) {
            int temp;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
    }
}
void reverse(float a[], int n){
    float temp;
    for (size_t i = 0; i <=n; i++,n--) {
        temp=a[n];
        a[n]=a[i];
        a[i]=temp;
    }
}
void add(float a[],int n,float b[]){
    for (size_t i = 0; i < n; i++) {
        a[i]+=b[i];
    }
}
float innerProduct(float a[],int n,float b[]){
    float sum=0;
    for (size_t i = 0; i < n; i++)
        sum+=(a[i]*b[i]);
    return sum;
}
bool isStmmetric(float a[], int n){
    for (size_t i = 0; i <= n; i++,n--) {
        if(a[i]!=a[n])
        return false;
    }
    return true;
}
void multiply(float a[],int n,float b[]){
    for (size_t i = 0; i <n; i++) {
        a[i]*=b[i];
    }
}
void ninetyrotate(int a[3][3],int n,int t){
    int ex[n][3]={0};
    // cout <<"Before the assignment.\n";
    // KareMatrixYaz(ex,3);
    int m=n-1;
    for(size_t k=0;k<t;k++){
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                // cout <<"buraya girdi!";
                ex[j][m]=a[i][j];
            }
            m--;
        }
        a=ex;
    }
    KareMatrixYaz(ex,3);
}
