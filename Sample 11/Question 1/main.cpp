#include <iostream>
#include "Animals.hpp"
#include <string>
using namespace std;

int main(){
	Animals* ptr;
	Dog p1;
	p1.setName("Haydar");
	cout <<"Dog name is: "<<p1.getName()<<endl;
	Bird p2;
	p2.setName("Limon");
	cout <<"Bird name is: "<<p2.getName()<<endl;
	ptr=&p1;
	cout <<"PTR talks: "<<ptr->talk();
	ptr=&p2;
	cout <<"PTR talks: "<<ptr->talk();
}