#include <stdexcept>
#include <iostream>
using namespace std;
class DivideByZero : public runtime_error {
public:
	DivideByZero() :
		runtime_error("You cannot divide by zero!!\n"){}
};