#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "List.hpp"

template <typename QUEUETYPE>
class Queue :private List< QUEUETYPE> {
public:
	void enqueue(const QUEUETYPE& data) {
		insertAtBack(data);
	}
	bool dequeue(QUEUETYPE& data) {
		return removeFromFront(data);
	}
	bool isQueueEmpty()const {
		return this->isEmpty();
	}
	void printQueue()const {
		this->print();
	}
};

#endif // QUEUE_HPP