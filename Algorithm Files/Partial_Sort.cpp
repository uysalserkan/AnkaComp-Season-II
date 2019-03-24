#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	//Sıralamayı yerlerini değiştirerek yapıyor ve ortadaki değer kadar sıralıyor gerisini aynen basıyor..
	vector <int> Listing= {5,8,1,-9,6,10,35,5,0,-11};
	partial_sort(Listing.begin(),Listing.begin()+3,Listing.end());
	for(int i=0;i<Listing.size();i++){
		cout <<Listing[i]<<" ";
	}
}