#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <int> vec={1,2,3,4,5,6,7,8,9};
	list <int> lis={-1,-2,-3,-4,-5,-6,-7,-8,-9};
	cout <<"Vector Members: ";
	for (size_t i = 0; i < vec.size(); i++) {
		cout <<vec[i]<<" ";
	}
	cout <<endl;
	cout <<"List Members: ";
	for(int n:lis)
		cout <<n<<" ";
		cout <<endl;
	swap_ranges(vec.begin(),vec.begin()+5,lis.begin());
	cout <<"Vector Members: ";
	for (size_t i = 0; i < vec.size(); i++) {
		cout <<vec[i]<<" ";
	}
	cout <<endl;
	cout <<"List Members: ";
	for(int n:lis)
		cout <<n<<" ";
	return 0;
}
