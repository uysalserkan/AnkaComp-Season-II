#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1 = "Non-Number of style on the board..";
	cout << "is (find): " << str1.find("on") << endl
		<< "is (rfind): " << str1.rfind("on") << endl;
	str1.erase(10);
	cout << "after erase(10) str1 is: " << str1 << endl;
	str1.replace(0, 4, "OFF-");
	cout << "After replace funct str1 is: " << str1 << endl;
	str1.insert(4, "-SS-");
	cout << "after insert str1 is: " << str1 << endl;
}