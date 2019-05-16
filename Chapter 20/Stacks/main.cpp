#include <iostream>
#include "Stacks.hpp"
using namespace std;

int main() {
	Stacks <int> intStacks;
	cout << "processing an integer Stack" << endl;
	for (int i = 0; i < 3; i++) {
		intStacks.push(i);
		intStacks.printStack();
	}
	int popInteger;

	while (!intStacks.isStackEmpty()) {
		intStacks.pop(popInteger);
		cout << popInteger << " popped from stack..";
		intStacks.printStack();
	}

	Stacks <double> doubleStack;
	double val = 1.1;
	cout << "processing an integer Double" << endl;
	for (int i = 0; i < 3; i++) {
		doubleStack.push(val);
		doubleStack.printStack();
		val += 1.1;
	}
	double popDouble;

	while (!doubleStack.isStackEmpty()) {
		doubleStack.pop(popDouble);
		cout << popDouble << " popped from stack..";
		doubleStack.printStack();
	}
}