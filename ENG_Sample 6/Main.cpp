#include <iostream>
#include <iomanip>
#include "Animal.h"
using namespace std;

void PrintInfo(Animal* pA){
	cout << pA->GetName() << setw(7) <<" Says: " << pA->Sounds() << "\n";
}

int main(){

	Cat minnos("Minnos"), pisicik("Pisicik");
	Dog karabas("Karabas"), tarcin("Tarcin");
	Bird mavis("Mavis"),cicikus("Cicikus");

	Animal* Animals[] = {
		&minnos,&pisicik,&karabas,
		&tarcin,&mavis,&cicikus
	};

	for (int i=0;i<6;++i)
		PrintInfo(Animals[i]);

	return 0;
}
