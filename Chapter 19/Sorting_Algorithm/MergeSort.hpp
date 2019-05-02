#ifndef MERGESORT_HPP
#define MERGESORT_HPP
#include <vector>
using namespace std;
class MergeSort{
private:
	int size;
	vector<int>data;
	void sortSubVector(int, int);
	void merge(int, int, int, int);
	void displaySubVector(int, int)const;
public:
	MergeSort(int);
	void sort();
	void displayElements()const;
};

#endif // !MERGESORT_HPP
