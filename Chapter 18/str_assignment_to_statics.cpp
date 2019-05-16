#include <iostream>
#include <string>
using namespace std;
int main() {
	string st1 = "Cat";
	string st2;
	st2.assign(st1);
	for (int i = 0; i < st2.length(); i++) {
		cout << st2.at(i);
	}
	cout << " end of for iteration.."<<endl;
	string st3(st2 + " Dog");
	st3 += " Bird";
	st3.append(" and others..\n");
	cout << st3;
	cout << "string comparing (st1-st2)\n";
	int rslt = st1.compare(st2);
	if (rslt == 0) {
		cout << "They are equal..\n";
	}
	else {
		cout << "They are not equal..\n";
	}
	cout << "string comparing (st1-st3)\n";
	int rslt1 = st1.compare(st3);
	if (rslt1 == 0) {
		cout << "They are equal..\n";
	}
	else {
		cout << "They are not equal..\n";
	}
	cout << "string comparing (st1-st3 3 character)\n";
	int rslt2 = st1.compare(0,3,st3,0,3);
	if (rslt2 == 0) {
		cout << "They are equal..\n";
	}
	else {
		cout << "They are not equal..\n";
	}

	cout << "Substring is [4-8]" << endl;
	cout << st3.substr(4, 8)<<endl;

	cout << "Before the swap st1: " << st1 << " st3: " << st3 << endl;
	cout << "string swapping st3 to st1\n";
	st1.swap(st3);
	cout << "After swapping st1: " << st1 << " st3: " << st3<<endl;
	cout << "Statics of st1: " << endl << "Capacity: " << st1.capacity() << endl
		<< "Max size: " << st1.max_size() << endl << "Size: " << st1.size() << endl
		<< "Length: "<<st1.length()<<endl<<"Is empty: " << st1.empty()<<endl;
}