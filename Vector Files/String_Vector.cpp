#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
	vector <string> ser={"","one","two","three","four","five","six","seven","eight","nine"};
	int x,y;
	cin >>x>>y;
	for (size_t i = x; i <= 9 && i<=y ; i++) {
		cout <<ser[i]<<endl;
	}
	if(x<10 && y>=10){
		for (size_t i = 10; i <= y; i++) {
			if(i%2==0)
			cout <<"even"<<endl;
			else
			cout <<"odd"<<endl;
		}
	}
	else
	if(y>=10){
		for (size_t i = x; i <= y; i++) {
			if(i%2==0)
			cout <<"even"<<endl;
			else
			cout <<"odd"<<endl;
		}
	}
}
