#include <iostream>
#include <cstring>
using namespace std;

class media{
protected:
	char title[50];
	float price;
public:
	media(char *s,float a){
		strcpy(title,s);
		price=a;
	}
	virtual void display()=0;
};
class book:public media{
private:
	int pages;
public:
	book(char *s,float a, int p):media(s,a){
		pages=p;
	}
	void display(){
		cout <<endl<<"Title: "<<title<<endl
		<<"Pages: "<<pages<<endl<<"Price: "<<price;
	}

};
class tape:public media{
private:
	float time;
public:
	tape(char *s, float a, float t):media(s,a){
		time=t;
	}
	void display(){
		cout <<endl<<"Title: "<<title<<endl
		<<"Play Time: "<<time<<" min."<<endl<<"Price: "<<price;
	}
};
int main(){
	char *title=new char[30];
	float price,time;
	int pages;
	cout <<"\n Enter Book Details\n";
	cout <<"Title: ";
	cin>>title;
	cout <<"Price: ";
	cin>>price;
	cout <<"Pages: ";
	cin>>pages;
	book p1(title,price,pages);
	
	cout <<"\n Enter Tape Details\n";
	cout <<"Title: ";
	cin>>title;
	cout <<"Price: ";
	cin>>price;
	cout <<"Play Time(min): ";
	cin>>time;
	tape p2(title,price,time);

	media *ptr;
	ptr=&p1;
	ptr->display();
	cout <<endl;
	ptr=&p2;
	ptr->display();
	cout <<endl;
}