#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Binary_Search.hpp"
using namespace std;
Binary::Binary(int vec_Size){
	size = (vec_Size > 0 ? vec_Size : 10);
	srand(time(0));

	for (int i = 0; i < size; i++) {
		data.push_back(10 + rand() % 90);
	}
	sort(data.begin(), data.end());
}
void Binary::DisplayElements() const{
	displaySubElements(0, size - 1);
}
int Binary::BinarySeach(int value) const{
	int low = 0;
	int high = size - 1;
	int middle = (low + high + 1) / 2;
	int loc = -1;
	do {
		displaySubElements(low, high);
		for (int i = 0; i < middle; i++) {
			cout << " ";
		}
		cout << "*" << endl;

		if (value == data[middle]) {
			loc = middle;
		}
		else if (value < data[middle]) {
				high = middle - 1;
			}
		else
			low = middle + 1;
		middle = (low + high + 1) / 2;
	} while ((low <= high) && (loc == -1));
	return loc;
}
void Binary::displaySubElements(int low, int high) const{
	for (int i = 0; i < low; i++) {
		cout << " ";
	}
	for (int i = low; i <= high; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}