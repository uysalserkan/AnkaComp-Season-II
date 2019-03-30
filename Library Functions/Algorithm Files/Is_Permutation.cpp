#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(void) {
	vector <int> vec1={0,1,2,3,4,5};
	vector <int> vec2={5,4,2,1,3,0};
	vector <int> vec3={0,1,4,8,9,6};
	string str1="Serkan";
	string str2="Sarken";
	string str3="Serka";
	cout <<"Vec1 is permutation of Vec2: "<<boolalpha<<is_permutation(vec1.begin(),vec1.end(),vec2.begin())<<endl;
	cout <<"Vec1 is permutation of Vec3: "<<boolalpha<<is_permutation(vec1.begin(),vec1.end(),vec3.begin())<<endl;
	cout <<"Str1 is permutation of Str2: "<<boolalpha<<is_permutation(str1.begin(),str1.end(),str2.begin())<<endl;
	cout <<"Str1 is permutation of Str3: "<<boolalpha<<is_permutation(str1.begin(),str1.end(),str3.begin())<<endl;
	return 0;

}
