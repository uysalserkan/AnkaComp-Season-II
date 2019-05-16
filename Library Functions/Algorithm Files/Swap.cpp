//https://en.cppreference.com/w/cpp/header/algorithm
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
	int a=5,b=15;
	string Ada="Adana en guzel sehirlerden biri.\n";
	string Ist="Istanbul varken diger sehirler de sehir mi be cnm.\n";
	cout <<a<<" "<<b<<endl;

	swap(a,b);
	cout <<a<<" "<<b<<endl;
	cout <<"Adana: "<<Ada<<"Istanbul: "<<Ist;
	swap(Ada,Ist);
	cout <<"Adana: "<<Ada<<"Istanbul: "<<Ist;
	swap(Ada,Ist);
	cout <<"Adana: "<<Ada<<"Istanbul: "<<Ist;
	return 0;
}
