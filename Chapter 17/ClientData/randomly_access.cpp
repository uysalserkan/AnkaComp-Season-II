#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.hpp"
using namespace std;

int main() {
	ofstream outCredit("credit.dat", ios::out | ios::binary);
	if (!outCredit) {
		cerr << "File couldn't opened.!!\n";
		exit(1);
	}
	ClientData blankClient;
	for (size_t i = 0; i < 100; i++){
		outCredit.write(reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
	}
}