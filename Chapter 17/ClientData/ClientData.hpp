#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <string>
using namespace std;
class ClientData{
private:
	int AccNumber;
	char lastName[15];
	char firstName[10];
	double balance;
public:
	ClientData(int = 0, string = "", string = "", double = 0.0);
	void setAccNumber(int);
	int getAccNumber()const;
	void setfirstName(string);
	string getfirstName()const;
	void setlastName(string);
	string getlastName()const;
	void setBalance(double);
	double getBalance()const;
};
#endif // !CLIENTDATA_h
