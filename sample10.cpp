#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#define SIZE 10
using namespace std;


	
class Market{
public:
	
	Market(){}

	Market( int v, double k ){
		ID = v;
		miktar = k;
	}

	int getID(){
		return ID;
	}

	double getMiktar(){
		return miktar;
	}

	void setMiktar(double m)
	{
		miktar=m;
	}

	void setID(int i){
		ID=i;
	}
private:
	int ID; 
	double miktar;
};

void writeToFile( Market* urunler, string fileName ){
ofstream out( fileName + ".txt");

for(int i=0;urunler[i].getID()!='\0';i++){
out<<urunler[i].getID()<<" "<<urunler[i].getMiktar()<<endl;
}


}


Market* readFromFile( string fileName )
{
Market* check=new Market[SIZE];
int ident;
double val;

ifstream input( fileName + ".txt");

for(int i=0;i<SIZE; i++){
input>>ident>>val;
check[i].setID(ident);
check[i].setMiktar(val);
}
return check;
	
}

Market* satinAl(Market* urunler, int id, double alis)
{

Market Satilan(id,alis);

for(int i=0;urunler[i].getID()!='\0';i++){

  if(urunler[i].getID()==Satilan.getID()){
    if(urunler[i].getMiktar() >= Satilan.getMiktar()){
     urunler[i].setMiktar(urunler[i].getMiktar()-Satilan.getMiktar());
    }
    else 
    cout<<"stok yetersiz durumda\n";
    }
}
return urunler;
	
}

void printurun(Market urun){
cout<<urun.getID()<<"  "<<urun.getMiktar()<<endl;
}

void printStok( Market* urunler )
{
for(int i=0; i<SIZE;i++)
printurun(urunler[i]);

}

int main(){
	Market* urunler;
	int id;
	double miktar;
	urunler = readFromFile( "Market");
	printStok( urunler );
	cout<<"Almak istediginiz urunun ID'sini giriniz:"<<endl;
	cin>>id;
	cout<<"Almak istediginiz miktari giriniz:"<<endl;
	cin>>miktar;
	urunler=satinAl(urunler, id, miktar);
	writeToFile( urunler, "Market" );
	printStok( urunler );
	return 0;
	
}
