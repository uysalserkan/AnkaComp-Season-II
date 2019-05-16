#include <iostream>
#include <string>
using namespace std;
int main() {
	string st1 = "Some String";
	const char* pt1 = 0;
	int lng = st1.length();
	char* pt2 = new char[lng + 1];
	st1.copy(pt2, lng, 0);
	pt2[lng] = '\0';

	cout << "C-Style: " << st1.c_str() << endl;
	pt1 = st1.data();
	for (int i = 0; i < lng; i++) {
		cout << *(pt1 + i);
	}
	cout << endl << "pt2: " << pt2 << endl;
	delete[] pt2;
}