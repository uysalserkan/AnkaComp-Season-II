#ifndef HEADER_HPP
#define HEADER_HPP
using namespace std;
//Function Prototypes
void copyToOther(double* pt1, const double* pt2);
int* giveAdress(int *pt, int num);
float take2Darray(float *pt1[],int n);
//4-?
//5-begin
float* max(float* p[], int n);
void print(float [ ], int);
void print(float* [ ], int);
//5-end
float* mirror(float* p,int n);
unsigned len(const char*s);
void cpy(char* s1, const char* s2);
void cat(char* s1, const char* s2);
int cmp(char* s1,char* s2);
float sum(float* p[], int n);
void abs(float *p[],int n);
void sort(float* p[],int n);
void selectionSort(int* pt);
void InsertionSort(int* pt);
int product(int (*pf)(int k), int n);
//XX16XX
#endif
