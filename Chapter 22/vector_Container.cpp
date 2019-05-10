#include <iostream>
#include <vector>
using namespace std;

template <typename T> void printVector(const vector<T>& integers2);

int main() {
	const int SIZE = 6;
	int array[SIZE] = { 1,2,3,4,5,6 };
	vector <int> integers;
	cout << "The initial size of integers is: " << integers.size()
		<< "\nThe initial capacity of integers is: " << integers.capacity();
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);
	cout << "\nThe initial size of integers is: " << integers.size()
		<< "\nThe initial capacity of integers is: " << integers.capacity();
	cout << "\n\nOutput array using ptr notation: ";
	for (int* ptr = array; ptr != array + SIZE; ptr++) {
		cout << *ptr << " ";
	}
	cout << "\n\nOutput array using iterator notation: ";
	printVector(integers);

	cout << "\nReversed contents of vector integers: ";
	vector<int>::const_reverse_iterator reverseIterator;
	vector<int>::const_reverse_iterator tempIterator=integers.rend();
	for (reverseIterator = integers.rbegin(); reverseIterator != tempIterator; ++reverseIterator) {
		cout << *reverseIterator << ' ';
	}
	cout << endl;
}

template <typename T>void printVector(const vector<T>& integers2) {
	typename vector<T>::const_iterator constIterator;
	for (constIterator = integers2.begin(); constIterator != integers2.end(); ++constIterator) {
		cout << *constIterator << ' ';
	}
}