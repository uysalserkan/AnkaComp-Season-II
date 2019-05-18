#include <iostream>
#include <string>
#include "TStack.hpp"

using namespace std;

template <class T>
void printandpop( stack<T>& s)
{
	while (!s.empty())
	{
		cout << s.top() << "\n";
		s.pop();
	}

}

int main()
{
	
	stack<int> IntStk;
	IntStk.push(1);
	IntStk.push(2);
	IntStk.push(3);
	IntStk.push(4);

	printandpop(IntStk);

	//-----------
	stack<string> StrStk;
	StrStk.push("ali");
	StrStk.push("ayse");
	StrStk.push("ahmet");
	StrStk.push("sam");
	StrStk.push("jack");
	StrStk.push("elena");
	StrStk.push("mina");

	printandpop(StrStk);

	
	
}