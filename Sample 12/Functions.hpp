#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#define SIZE 10
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> BinaryCode;
typedef BinaryCode::iterator BCIterator;
//Question 3
template <class T>
T small(T m,T n){
	return m>n?n:m;
}
//Question 4
template <class T>
bool binarySearch(T values[SIZE],T key){
	int start=0;
	int end=SIZE-1;
	int mid=(SIZE-1)/2;
	while(!(start>end)){
		cout <<"mid suan: "<<mid<<endl;
		if(key==values[mid])
			return true;
		if(key>values[mid]){
			start=mid+1;
			mid=(start+end)/2;
		}
		if(key<values[mid]){
			end=mid-1;
			mid=(start+end)/2;
		}
	}
	return false;
}

//Question 8
float median(vector<float>& v){
	sort(v.begin(),v.end());
	if(v.size()%2==0){
		return v[v.size()/2];
	}
	else{
		return (v[v.size()/2+1]+v[v.size()/2-1])/2;
	}
}


//Question 9.1
template <class BinaryCode>
int unsignedValue(BinaryCode bc){
	int value=0;
	for(int i=0;i<bc.size();i++){
		value+=bc[i]*pow(2,bc.size()-i-1);
	}
	return value;
}



//Question 9.2
vector<int> getUnsignedCode(unsigned n){
	vector<int> vec;
	int ctr=0;
	cout <<"burada";
	for(int i=0;i;i++){
		if(n==0)
			break;
		if(n%2!=0){
			vec.push_back(1);
			n--;
		}
		else{
			ctr++;
			n/=2;
		}
	}
	vec[ctr]=1;
	cout <<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3]<<" "
    <<vec[4]<<" "<<vec[5]<<" "<<vec[6]<<endl;
	return vec;
}
#endif //FUNCTIONS_HPP"