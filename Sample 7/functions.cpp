#include <iostream>
#include "header.hpp"
using namespace std;
void copyToOther(double *pt1, const double *pt2){
    for (pt2;*pt2!=NULL;pt1++,pt2++) {
        *pt1=*pt2;
    }
    *(pt1)=NULL;
}
//////////////////////////////////////////////////////////////////////
int* giveAdress(int *pt, int num){
for (size_t i = 0; pt[i]!=NULL; i++) {
        if(pt[i]==num){
            return &pt[i];
        }
    }
    return NULL;
}
//////////////////////////////////////////////////////////////////////
float take2Darray(float *pt1[],int n){
    float *newpt;
    newpt=new float [n];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; pt1[i][j]!=NULL; j++,newpt++) {
            *newpt=pt1[i][j];
        }
    }
    *newpt=NULL;
    return *newpt;
}
//////////////////////////////////////////////////////////////////////
float* max(float* p[], int n){
    float max=p[0][0];
    int mxindex;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < NULL; j++) {
            if(max<p[i][j]){
                max=p[i][j];
                mxindex=i;
            }
        }
    }
    for (size_t i = 0; i < mxindex; i++) {
        p++;
    }
    return *p;
}
//??? void print(float [ ], int);
//??? void print(float* [ ], int);
//////////////////////////////////////////////////////////////////////
float* mirror(float* p,int n){
    int size=0;
    float* will=new float[n];
    for (size_t i = 0; p[i]!=NULL; i++) {
        size++;
    }
    for (size_t i = 0; i < size; i++) {
        will[i]=p[size-i-1];
        // cout <<will[i]<<"\n";
    }
    will[size]=NULL;
    for (will;*will!=NULL;will++) {
        cout <<*will<<" ";
    }
    return will;
}
//////////////////////////////////////////////////////////////////////
unsigned len(const char*s){
    int sz=0;
    for (size_t i = 0; s[i]!='\0'; i++) {
        sz++;
    }
    return sz;
}
//////////////////////////////////////////////////////////////////////
void cpy(char* s1, const char* s2){
    for(s2;*s2!='\0';s2++,s1++){
        *s1=*s2;
    }
    *s1='\0';
}
//////////////////////////////////////////////////////////////////////
void cat(char* s1, const char* s2){
    for (s2;*s2!='\0';s2++,s1++) {
        *s1=*s2;
    }
}
//////////////////////////////////////////////////////////////////////
/*
Eşitlik olarak değil de boyut olarak anlaşılıyor soruda..
*/
int cmp(char* s1,char* s2){
    for(s1;;s1++,s2++){
        if(*s1=='\0'&&*s2=='\0')
            return 0;
        if(*s1=='0')
            return -1;
        if(*s2=='0')
            return 1;
    }
}
//////////////////////////////////////////////////////////////////////
float sum(float* p[], int n){
    float sum=0;
    for (size_t i = 0; i < n; i++) {
        sum+=p[i];
    }
    return sum;
}
//////////////////////////////////////////////////////////////////////
void abs(float *p[],int n){
    for (size_t i = 0; i < n; i++)
        if(p[i]<0)
            p[i]*=-1;
}
//////////////////////////////////////////////////////////////////////
void sort(float* p[],int n){
    
}
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
