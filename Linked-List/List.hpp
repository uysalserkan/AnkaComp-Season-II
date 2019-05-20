#ifndef LIST_HPP
#define LIST_HPP
#include "Node.hpp"
class List{
private:
	int capacity;
	int length;
	Node *front;
	Node *back;
public:
	List(int size);
	List();
	~List();
	int Insert(int uload);
	int Remove(int uload);
	void Print();
	void ReversePrint();
};

#endif //LIST_HPP