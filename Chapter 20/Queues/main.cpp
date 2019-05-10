#include <iostream>
#include "Queue.hpp"
using namespace std;

int main() {
	Queue<int> intQ;
	cout << "Processing an int Q" << endl;

	for (int i = 0; i < 3; i++) {
		intQ.enqueue(i);
		intQ.printQueue();
	}
	int deQ;
	while (!intQ.isQueueEmpty()) {
		intQ.dequeue(deQ);
		cout << deQ << " dequeued\n";
		intQ.printQueue();
	}

	Queue<double> doubQ;
	cout << "Processing an double Q" << endl;
	double val = 1.1;
	for (int i = 0; i < 3; i++) {
		doubQ.enqueue(val);
		doubQ.printQueue();
		val += 1.1;
	}
	double deDoub;
	while (!doubQ.isQueueEmpty()) {
		doubQ.dequeue(deDoub);
		cout << deDoub << " dequeued.\n";
		doubQ.printQueue();
	}



}