#ifndef STACKS_HPP 
#define STACKS_HPP
#include "List.hpp"
template <typename STACKTYPE>
class Stacks :private List<STACKTYPE> {
public:
	void push(const STACKTYPE& data) {
		insertAtFront(data);
	}
	bool pop(STACKTYPE& data) {
		return removeFromFront(data);
	}
	bool isStackEmpty()const {
		return this->isEmpty();
	}
	void printStack()const {
		this->print();
	}
};


#endif //STACKS_HPP