#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	vector <int> vec1={1,2,3,4};
	vector <int> vec2={1,7,3,4};
	string str1="abc";
	string str2="bca";
	cout <<"Vec1 is sorted? : "<<boolalpha<<is_sorted(vec1.begin(),vec1.end())<<endl;
	cout <<"Vec2 is sorted? : "<<boolalpha<<is_sorted(vec2.begin(),vec2.end())<<endl;
	cout <<"STR1 is sorted? : "<<boolalpha<<is_sorted(str1.begin(),str1.end())<<endl;
	cout <<"STR2 is sorted? : "<<boolalpha<<is_sorted(str2.begin(),str2.end())<<endl;

}
