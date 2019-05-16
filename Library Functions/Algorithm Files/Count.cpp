#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <int> ser={2,5,8,1998,6,66,4,3,88,42,6,16,6,98982};
	int target1=1998;
	int target2=6;
	int find1=count(ser.begin(),ser.end(),target1);
	int find2=count(ser.begin(),ser.end(),target2);
	cout <<"The number: "<<target1<<" find in the vector "<<find1<<" times.\n";
	cout <<"The number: "<<target2<<" find in the vector "<<find2<<" times.\n";
	cout <<"The number: 156"<<" find in the vector "<<count(ser.begin(),ser.end(),156)<<" times.\n";
	int find3=count_if(ser.begin(),ser.end(),[](int i){return i%2==0;});
	cout <<"The number: mod 2"<<" find in the vector "<<find3<<" times.\n";

}
