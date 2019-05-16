#include <iostream>
#include "Market.hpp"
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

#define SIZE 10

void writeToFile(Market* urunler, string FileName) {
	ofstream out( FileName +".txt");
	for(int i=0;urunler[i].getID()!='\0';i++){
		out <<urunler[i].getID()<<" "<<urunler[i].getMiktar()<<endl;
	}
}
Market* readFromFile(string FileName) {
	Market* check=new Market[SIZE];
	int ident;
	double val;
	ifstream input(FileName + ".txt");
	for(int i=0;i<SIZE;i++){
		input >>ident>>val;
		check[i].setID(ident);
		check[i].setMiktar(val);
	}
	return check;
}
Market* satinAl(Market* urunler, int id, double alis) {
	Market Satilan(id,alis);
	for(int i=0; urunler[i].getID() != '\0';i++){
		if (urunler[i].getID() == Satilan.getID()) {
			if (urunler[i].getMiktar() >= Satilan.getMiktar()) {
				urunler[i].setMiktar(urunler[i].getMiktar() - Satilan.getMiktar());
			}
			else
				cout << "Stok yetersiz durumda!!\n";
		}
	}
	return urunler;
}
void printUrun(Market urun) {
	cout << "ID: " << urun.getID() << "\t" << "Price: " << urun.getMiktar() << endl;
}
void printStok(Market* urunler) {
	for (int i = 0;i<SIZE; ++i) {
		printUrun(urunler[i]);
	}
}



int main() {
	Market* urunler=new Market[SIZE];
	int id;
	double miktar;
	urunler = readFromFile("Market");
	printStok(urunler);
	cout << "Almak istediginiz urunun ID'sini giriniz:" << endl;
	cin >> id;
	cout << "Almak istediginiz miktari giriniz:" << endl;
	cin >> miktar;
	urunler = satinAl(urunler, id, miktar);
	writeToFile(urunler, "Market");
	printStok(urunler);
	return 0;
	

}