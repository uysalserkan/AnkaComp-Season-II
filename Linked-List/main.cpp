#include <iostream>
#include <algorithm>
#include "List.hpp"
using namespace std;
int main(){
	List sList(100);
	List uList;
	sList.Print();
	
	int values[100];
	for(int i=0;i<100;i++)
		values[i]=i+1;
	random_shuffle(&values[0],&values[100]);

	for(int i=0;i<100;i++)
		sList.Insert(values[i]);
	sList.Print();
	cout <<endl;
	sList.ReversePrint();
	sList.Remove(125);
	cout <<endl;
	for(int i=0;i<=100;i++){
		int pos=100-i;
		sList.Remove(values[pos]);
	}
	sList.Print();
	cout <<endl;

	for(int i =0; i<100; i++)
	{
		uList.Insert(values[i]);
	}
	
	uList.Insert(101); uList.Insert(102);
	uList.Print(); uList.ReversePrint();
	uList.Remove(200);

	uList.Insert(1);
}