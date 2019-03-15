#include <iostream>
#include "Interface.h"
using namespace std;
int main(){
	Interface i(5);
	cout <<"Interface Contains: "<<i.GetValue()<<" before SetValue() "<<endl;
	i.SetValue(15);
	cout <<"Interface Contains: "<<i.GetValue()<<" after SetValue() "<<endl;
}
