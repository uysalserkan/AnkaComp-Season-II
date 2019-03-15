#include "Interface.h"
#include "Implementation.h"
Interface::Interface(int v){
	ptr=(new Implementation(v));
}
void Interface::SetValue(int v){
	ptr->SetValue(v);
}
int Interface::GetValue()const{
	return ptr->GetValue();
}
Interface::~Interface(){
	delete ptr;
}
