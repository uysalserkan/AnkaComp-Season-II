#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <int> Ser={0,8,25,8,2,5,1,9,8,88,99,1998};
	for(const int &i:Ser) //access by const referance
		cout <<i<<" ";
	cout <<endl;
	for(auto i:Ser)//access by value, the type of i is int
		cout <<i<<" ";
	cout <<endl;
	for(auto&& i:Ser)//access by forwarding referance the type of i int&
		cout <<i<<" ";
	cout <<endl;
	const auto CV=Ser;
	for(auto i:CV)//access by referance
		cout <<i<<" ";
	cout <<endl;
	for(int n:{6,9,2,0,1,5,2,6,6,7}) //access by list initializer
	cout <<n<<" ";
	cout <<endl;
	int a[]={2,3,5,1,2,3,5,844};
	for(int n:a) //access by the array notation.
	cout <<n<<" ";
	cout <<endl;
	return 0;
}
