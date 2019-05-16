#include <iostream>
#include "Binary_Search.hpp"
using namespace std;

int main() {
	int src, pos;
	Binary vec(15);
	vec.DisplayElements();
	cout << endl << "Please enter a value for search in the vector(-1 for exit): ";
	cin >> src;
	while (src != -1) {
		pos = vec.BinarySeach(src);

		if(pos==-1){
			cout << "The integer " << src << " was not found in the vector..\n";
		}
		else {
			cout << "The integer " << src << " was found in " << pos+1 << endl;
		}
		cout << "\n\tPlease enter a integer for search in vector(-1 for exit): ";
		cin >> src;
	}
}