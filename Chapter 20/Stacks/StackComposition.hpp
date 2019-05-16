#ifndef STACKCOMPOSITION_HPP
#define STACKCOMPOSITION_HPP

#include "List.hpp"

template <typename STACKTYPE>
class Stack {
private:
	List <STACKTYPE> stackList;
public:
	void push(const STACKTYPE& data) {
		stackList.insertAtFront(data);
	}
	bool pop(STACKTYPE& data) {
		return stackList.removeFromFront(data);
	}
	bool isEmpty()const {
		return stackList.isEmpty();
	}
	void printStack()const {
		stackList.print();
	}
};

#endif // STACKCOMPOSITION_HPP