#include <iostream>
#define SIZE 10
void bubblesorting(int a[SIZE]);
using namespace std;
int main(void) {
	int usr[SIZE]={0},i=0;
	cout << '\t'<<"Welcome" << endl<<"Please enter 10 number for sorting: ";
	for(i=0;i<SIZE;i++){
		
		cin >>usr[i];
	}
	//sorting step.
	bubblesorting(usr);
	for(i=0;i<SIZE;i++)
		cout <<usr[i]<<" ";
	cout <<endl;
}
void bubblesorting(int a[SIZE]){
	int i,j,temp;
	for(j=0;j<SIZE;j++){
		for(i=0;i<SIZE-1;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}