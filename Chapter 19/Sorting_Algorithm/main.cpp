#include <iostream>
#include "MergeSort.hpp"
using namespace std;

int main() {
	MergeSort sortVec(15);
	cout << "unsorted vec is: " << endl;
	sortVec.displayElements();
	cout << endl << endl;

	sortVec.sort();
	cout << "Sorted vec is: " << endl;
	sortVec.displayElements();
	cout << endl;
}