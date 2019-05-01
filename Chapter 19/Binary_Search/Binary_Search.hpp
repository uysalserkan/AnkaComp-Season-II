#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP
#include <vector>
using namespace std;
class Binary{
private:
	int size;
	vector<int>data;
	void displaySubElements(int, int)const;
public:
	Binary(int);
	int BinarySeach(int)const;
	void DisplayElements()const;
};
#endif // !BINARY_SEARCH_HPP
