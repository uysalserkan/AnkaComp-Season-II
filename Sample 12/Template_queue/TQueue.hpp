#ifndef TQUEUE_HPP
#define TQUEUE_HPP
template <class T>
class myqueue{
private:
	T* data;
	int qsize;
	int first;         // Index of double at front of the myqueue
	int last;          // Index of double at rear of the myqueue
	int count;  		// Total number of doubles in the myqueue
	int next_index(int i) const { return (i + 1) % qsize; }
public:
	myqueue(int sz = 30);
	~myqueue();

	// MODIFICATION MEMBER FUNCTIONS
	void pop();
	void push(const T& entry);

	// CONSTANT MEMBER FUNCTIONS
	bool empty() const { return (count == 0); }
	T front() const;
	int size() const { return count; }
};

template <class T>
myqueue<T>::myqueue(int sz)
	:qsize(sz)
{
	data = new T[qsize];
	count = 0;
	first = 0;
	last = qsize - 1;
}
template <class T>
myqueue<T>::~myqueue()
{
	delete[] data;
}

template <class T>
T myqueue<T>::front() const
{
	return data[first];
}

template <class T>
void myqueue<T>::pop()
{
	first = next_index(first);
	--count;
}

template <class T>
void myqueue<T>::push(const T& entry)
// Library facilities used: cassert
{
	last = next_index(last);
	data[last] = entry;
	++count;
}

#endif //TQUEUE_HPP