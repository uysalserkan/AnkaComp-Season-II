#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MergeSort.hpp"
using namespace std;


MergeSort::MergeSort(int vec_size) {
	size = (vec_size > 0 ? vec_size : 10);
	srand(time(0));

	for (int i = 0; i < size; i++)
		data.push_back(10 + rand() % 90);
}
void MergeSort::sort() {
	sortSubVector(0, size - 1);
}
void MergeSort::sortSubVector(int low, int high) {
	if (high - low >= 1) {
		int mid1 = (high + low) / 2;
		int mid2 = mid1 + 1;

		cout << "split: ";
		displaySubVector(low, high);
		cout << endl << " ";
		displaySubVector(low, mid1);
		cout << endl << "";
		displaySubVector(mid2, high);
		cout << endl << "";

		sortSubVector(low, mid1);
		sortSubVector(mid2, high);
		merge(low, mid1, mid2, high);
	}
}
void MergeSort::displayElements()const {
	displaySubVector(0, size - 1);
}
void MergeSort::displaySubVector(int low, int high)const {
	for (int i = 0; i < low; i++) {
		cout << " ";
	}
	for (int i = low; i <= high; i++) {
		cout << " " << data[i];
	}
}
void MergeSort::merge(int left, int mid1, int mid2, int right) {
	int LIndex = left;
	int RIndex = mid2;
	int ComIndex = left;
	vector <int> combined(size);

	cout << "merge: ";
	displaySubVector(left, mid1);
	cout << endl << "   ";
	displaySubVector(mid2, right);

	while (LIndex <= mid1 && RIndex <= right) {
		if (data[LIndex] <= data[RIndex]) {
			combined[ComIndex++] = data[LIndex++];
		}
		else{
			combined[ComIndex++] = data[RIndex++];
		}
	}

	if (LIndex == mid2) {
		while (RIndex <= right) {
			combined[ComIndex++] = data[RIndex++];
		}
	}
	else {
		while (LIndex <= mid1) {
			combined[ComIndex++] = data[LIndex++];
		}
	}

	for (int i = left; i <= right; i++) {
		data[i] = combined[i];
	}
	cout << "   ";
	displaySubVector(left, right);
	cout << endl << endl ;
}