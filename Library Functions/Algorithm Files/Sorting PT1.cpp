//https://en.cppreference.com/w/cpp/header/algorithm
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <int> cl={2,1,5,6,-2,-100};
	sort(cl.begin(),cl.end());
	for(auto a:cl)
		cout <<a<<" ";
	cout <<endl;
	sort(cl.begin(),cl.end(), greater<int>());
	for(auto a:cl)
		cout <<a<<" ";
	cout <<endl;
	return 0;
}
