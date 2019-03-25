//pg. 472
#include <iostream>
#include "Array.h"
using namespace std;
int main(void) {
	Array integers1(7);
	Array integers2;
	cout <<"Size of integers1: "<<integers1.getSize()<<endl<<"Integers1 after initialization: "<<integers1<<endl;
	cout <<"Size of integers2: "<<integers2.getSize()<<endl<<"Integers2 after initialization: "<<integers2<<endl;
	cout <<"Enter 17 integers: ";
	cin >>integers1>>integers2;
	cout <<"After the user inputs;\nInteger1:\n"<<integers1<<endl<<"Integers2\n"<<integers2<<endl;
	cout << "\nEvaluating: integers1 != integers2" << endl;
	if ( integers1 != integers2)
 		cout << "integers1 and integers2 are not equal" << endl;
	Array integers3(integers1);
	cout <<"Size of integers3: "<<integers3.getSize()<<endl<<"Integers3 after initialization: "<<integers3<<endl;
	integers1=integers2;
	cout <<"After assign integer2 to integer1.\n";
	cout <<"integers1: "<<integers1<<endl<<"integers2: "<<integers2<<endl;
	cout << "\nEvaluating: integers1 == integers2" << endl;
	if ( integers1 == integers2)
 		cout << "integers1 and integers2 are equal" << endl;
	cout <<"Assigning 1000 to integers1[5].\n";
	integers1[5]=1000;
	cout <<"integers1: "<<integers1<<endl;
	try{
		cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
		integers1[15]=1000;
	}
	catch(out_of_range &ex){
		cout <<"An exception occoured: "<<ex.what()<<endl;
	}
}

/*
TODO: cout overloading
TODO: cin overloading
TODO: inequality overloading
TODO: equality overloading
TODO: invoke copy constructor
TODO: constructor
TODO: destructor
TODO: Assignment overloading
TODO: Subscripty overloading
TODO:
*/
