#ifndef _STACK_H
#define _STACK_H

class stack
{
public:
	
	stack(int sz = 40);
	~stack();
	// MODIFICATION MEMBER FUNCTIONS
	void push(const double& entry);
	void pop();
	double& top();
	// CONSTANT MEMBER FUNCTIONS
	bool empty() const { return (used == 0); }
	int size() const { return used; }	
private:
	double* data;
	int used;             // How much of array is being used
	int ssize;
};

stack::stack(int sz)
	:ssize(sz)
{ 
	used = 0; 
	data = new double[ssize];
}

stack::~stack()
{
	delete[] data;
}

void stack::push(const double& entry)
{
	data[used] = entry;
	++used;

}

void stack::pop()
{
	--used;

}

double& stack::top()
{
	
	return data[used - 1];
}

#endif
