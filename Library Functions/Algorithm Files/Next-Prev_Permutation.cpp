#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	// vector <int> vec={6,8,4,22,1,3,99,1,36};
	string vec="SER";
	sort(vec.begin(),vec.end());
	cout <<"=====Next Permutation========\n";
	do {
		cout <<vec<<endl;
	} while(next_permutation(vec.begin(),vec.end()));
	sort(vec.begin(),vec.end(),greater<char>());
	cout <<"=====Prev Permutation========\n";

	do {
		cout <<vec<<endl;
	} while(prev_permutation(vec.begin(),vec.end()));

	return 0;
}
