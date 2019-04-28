#include <iostream>
#include <cmath>
using namespace std;
double derivative(double(*pf)(double t), double x, double h) // Returns an approximation to the derivative f'(x):
{
	double key = 0;
	key = (pf(x + h) - pf(x - h))/ (2*h);
	return key;
}
double cube(double t)
{
	return t * t* t;
}

int main()
{
	int x;
	cin >> x;
	cout << derivative(cube, x, 0.1) << endl;
	cout << derivative(cube, x, 0.01) << endl;
	cout << derivative(cube, x, 0.001) << endl;
	cout << derivative(sqrt, x, 0.1) << endl;
	cout << derivative(sqrt, x, 0.01) << endl;
	cout << derivative(sqrt, x, 0.001) << endl;
	int k;
	cin >> k;
}
