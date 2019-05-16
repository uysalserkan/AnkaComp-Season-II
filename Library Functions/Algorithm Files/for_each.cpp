#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <int> ser={6,8,1,0,7,1,11};
	for(auto a:ser)
		cout <<a<<" ";
	cout <<endl;
	for_each(ser.begin(),ser.end(),[](int &a){++a;});
	for(auto a:ser)
		cout <<a<<" ";
	cout <<endl;
	for_each(ser.begin(),ser.end(),[](int &a){cout <<a<<" ";});
	return 0;
}
