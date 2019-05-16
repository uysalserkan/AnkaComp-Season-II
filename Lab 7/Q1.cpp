#include <iostream>
using namespace std;
float* max(float* p[], int n){
	float* mxvalue = p[0];
	for (int i = 0; i < n; i++){
		if (*mxvalue < *p[i]) {
			mxvalue = p[i];
		}
	}
	return mxvalue;
}
void print(float arr[], int n){
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";	
	cout << endl;
}
void print(float* arr[], int n){
	float* end = arr[n - 1];
	for (float* begin = arr[0]; begin <= end; begin++)
		cout << *begin << " ";
	cout << endl;
}
void getFromUser(float arr[], int n){
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int main(void){
	float a[8];
	float* p[8];

	getFromUser(a, 8);//Get 8 float numbers from user.

	

	for (int i = 0; i < 8; i++)
		p[i] = &a[i];              //p[i] points to a[i]. 

	float* m = max(p, 8);
	print(a, 8);//Array: printed by using itself(direct access).
	print(p, 8);//Array: printed by using pointer array(indirect access).
	cout << *m << endl;//The maximum value.
}
