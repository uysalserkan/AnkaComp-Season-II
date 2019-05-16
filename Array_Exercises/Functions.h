#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void sortArr(float a[],int size);
void ArrYaz(float a[],int n);
float min(float a[], int n);
int minIndex(float a[],int n);
void getExtremes(float& min,float& max,float a[],int n);
void largest(float& max1, float& max2, float a[], int n);
void remove(float a[],int& n,int i);
bool removeFirst(float a[],int& n,float x);
void removeAll(float a[],int& n,float x);
void rotate(float a[],int n,int k);
void append(float a[],int m,int b[],int n);
void insert(float a[],int& n,float x);
int frequency(float a[],int n,int x);
void reverse(float a[], int n);
void add(float a[],int n,float b[]);
float innerProduct(float a[],int n,float b[]);
bool isStmmetric(float a[], int n);
void multiply(float a[],int n,float b[]);
void ninetyrotate(int a[3][3],int n,int t);
void KareMatrixYaz(int a[3][3],int n);
/*
19) Implement the Insertion Sort algorithm for sorting an array of n elements. In this algorithm, the
main loop index i runs from 1 to n–1. On the ith iteration, the element a[i] is “inserted” into its
correct position among the subarray a[0..i]. This is done by shifting one position up all the elements
in the subarray that are greater than a[i]. Then a[i] is copied into the gap between the elements that
are less than or equal to a[i] and those that are greater.
N elemanlı bir diziyi sırlamak için “Eklemeli Sıralama” algoritmasını uygulayın. Bu algoritmada,
ana döngü indeksi i 1 ile n – 1 arasında çalışır. İ. iterasyonda, a [i] elemanı a [0..i] alt dizisi
arasındaki doğru pozisyona “yerleştirilir”. Bu, alt-dizideki a [i] 'den daha büyük olan tüm
elemanlar bir konum yukarı kaydırılarak yapılır. Daha sonra a [i], a [i] 'den küçük veya ona eşit
olan elemanlar ile daha büyük olanların arasındaki boşluğa kopyalanır.
20) Implement the Selection Sort algorithm for sorting an array of n elements. This algorithm has n–1
iterations, each selecting the next largest element a[j] and swapping it with the element that is in the
position where a[j] should be. So on the first iteration it selects the largest of all the elements and
swaps it with a[n-1], and on the second iteration it selects the largest from the remaining unsorted
elements a[0..n-2] and swaps it with a[n-2], etc. On its ith iteration it selects the largest from the
remaining unsorted elements a[0..n-i] and swaps it with a[n-i].
N elemanlı bir diziyi sıralamak için “Seçmeli Sıralama” algoritmasını uygulayın. Bu algoritma,
her biri bir sonraki en büyük a[j] öğesini seçip onu a[j] 'nin olması gereken konumda olan
elemanla değiştiren n-1 iterasyona sahiptir. Böylece, ilk iterasyonda, tüm elemanların en
büyüğünü seçer ve onu a[n-1] ile değiştirir ve ikinci iterasyonda, kalan sınıflandırılmamış
elemanlardan a[0..n-2] arasından en büyüğünü seçer ve değiştirir a[n-2], vb.
*/

#endif
