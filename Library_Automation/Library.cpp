#include <iostream>
#include <string>
#include <vector>
#include <fstream>
 #include <unistd.h>
#include "Library.hpp"
using namespace std;
//Cout overloading for Book 
ostream &operator<<(ostream& out, const Book& ex){
	out <<"\nBook Name: "<<ex.name<<"\nBook ID: "<<ex.identity<<"\nBook Author: "<<ex.author
	<<"\nBook Publisher: "<<ex.publisher<<"\nISBN: "<<ex.isbn<<endl;
	return out;
}
//Cout overloading for person 
ostream &operator<<(ostream& out, const Person ex){
	out <<ex.idnumber<<" "<<ex.name<<" "<<ex.surname<<endl;
	return out;
}
//Cin overloading for Book
istream &operator>>(istream& in, Book &ex){
	//cin.ignore();
	cout <<"Name: ";
	//getline(in,ex.name);
	in >>ex.name;
	cout <<"Identity: ";
	in>>ex.identity;
	//cin.ignore();
	cout <<"Author: ";
	//getline(in,ex.author);
	in>>ex.author;
	cout <<"Publisher ";
	in>>ex.publisher;
	//getline(in,ex.publisher);
	cout <<"ISBN: ";
	//cin.ignore();
	in>>ex.isbn;
	return in;
}
void Library::takeDatas(){
	ifstream libOpen("Library.txt",ios::binary|ios::in);
		string n,is,a,p;
		int id;
		if(libOpen.is_open())
			for(int i=0;!libOpen.eof();i++){
				libOpen >>id>>n>>a>>p>>is;
				Book temp(n,is,a,p,id);
				LibBooks.push_back(temp);
			}
}
Library::Library(){
	takeDatas();
	system("clear");
	int op=0;
	cout <<"\tWelcome to the Library Automation(v.0.1)"
	<<"\n\tPlease enter your book name or etc. with together (no has space)"
	<<"\n 1 - List All Books(including outside)\n 2 - List All Aviable Books"
	<<"\n 3 - List All Outside Books\n 4 - Add Summary\n 5 - Update Summary\n 6 - Delete Summary"
	<<"\n 7 - Add Books\n 8 - Update Books\n 9 - Delete Books\n10 - Check Book Is Here"
	<<"\n11 - How Many Books In Library "	
	<<"\n-1 - Exit the program."
	<<"\nPlease select a operation(1-11): ";
	cin >>op;
	while(op<-1||op>11 || op==0){
		cout <<"You selected undefined operator.\nPlease select a correct operation: ";
		cin >>op;
	}
	
	switch (op){		
	case 1:
		break;
		
	case 2:
		break;

	case 3:
		break;

	case 4:
		system("clear");
		addSummary();
		break;
	case 5:
		system("clear");
		updateSummary();
		break;
	case 6:
		system("clear");
		deleteSummary();
		break;
	case 7:
		system("clear");
		addBookToLibrary();
		break;
	case 11:
		cout <<"The library has "<<howmanybook-1<<" books.\n"; 
		break;

	case -1:
		cout <<"\n\tLibrary Automation(v.0.1) is closing.\n";
		usleep(500000);
		system("clear");
		exit(1);
		break;
	default:
		break;
	}
}
void Library::addBookToLibrary(){
	int size;
	cout <<"How many add book: ";
	cin >>size;
	for(int i=0;i<size;i++){
		Book ex;
		cin >>ex;
		if(hasNoSameBookAtLibrary(ex)){
			LibBooks.push_back(ex);
			cout<<"\nYour book is successfully added.\n";
			}
		else
			cout <<"\nThe Book is burned, which were you add now!\n";
	}
	WriteToSystem();
}
void Library::checkMatchingBooks(){
	string cur_isbn;
	for(int i=0;i<LibBooks.size()-1;i++){
		cur_isbn=LibBooks[i].isbn;
		for(int j=i+1;j<=LibBooks.size();j++){
			if(cur_isbn==LibBooks[j].isbn)
				LibBooks.erase(LibBooks.begin()+j);
		}
	}
}
void Library::showBooksAtLibrary(){
	for(int i=0;i<LibBooks.size();i++)
		cout <<LibBooks[i];
}
void Library::WriteToSystem(){ 
	ofstream libWrite("Library.txt",ios::binary|ios::out);
	checkMatchingBooks();
	for(int i=0;i<LibBooks.size();i++)
		libWrite <<LibBooks[i].identity<<" "<<LibBooks[i].name<<" "<<LibBooks[i].author
		<<" "<<LibBooks[i].publisher<<" "<<LibBooks[i].isbn<<endl;
}
int Library::operation(){
	int op=0;
	cout <<"1- With Book ID number\n2- With Book Name\n3- With ISBN"
	<<"\n4- Return Main Menu\nPlease enter your operation number: ";
	cin>>op;
	while(op<1||op>4){
		cout <<"Does not have operator which you are selected!\nPlease a correct operator: ";
		cin >>op;
	}
	return op;
}
void Library::addSummary(){
	//id name isbn olarak eklenebilir.
		switch (operation()){
		case 1:
			addWithID(1);
			break;
		case 2:
			addWithBookName(1);
			break;
		case 3:
			addWithISBN(1);
			break;
		case 4:
			Library();
			break;
		}
}
void Library::deleteSummary(){
	switch (operation()){
		case 1:
			addWithID(3);
			break;
		case 2:
			addWithBookName(3);
			break;
		case 3:
			addWithISBN(3);
			break;
		case 4:
			Library();
			break;
		}
}
void Library::updateSummary(){
	switch (operation()){
		case 1:
			addWithID(2);
			break;
		case 2:
			addWithBookName(2);
			break;
		case 3:
			addWithISBN(2);
			break;
		case 4:
			Library();
			break;
		}
}
void Library::addSummaryToLibrary(string isbn){
	if(!hasTheBook(isbn)){
		cout <<"Library does not have the book.\n";
		return;
		}
	else
		if(hasASummary(isbn)){
			cout <<"The summary is already written.\n";
			return;
			}
		else{
			ofstream summary(".\\Summaries\\"+isbn+".txt");
			string sum;
			system("clear");
			cout <<"Please enter the summary, when you enter the enter the input operation will bi end.\n";
			cin.ignore();
			getline(cin,sum);
			summary <<sum;
		}
}
void Library::updateTheSummary(string isbn){
	ifstream in(".\\Summaries\\"+isbn+".txt");
	if(in.fail()){
		cout <<"Library does not have the book summary.\nYou should create new one.\n";
		return;
		}
	else{
		system("clear");
		string befsummary;
		cout << "\t\tYOUR SUMMARY IS\n\n";
		for(int i=0;!in.eof();i++){
			getline(in,befsummary);
			cout <<befsummary<<endl;
		}
		ofstream summary(".\\Summaries\\"+isbn+".txt",ios::app);
		string sum;
		cout <<"\nPlease enter the summary, when you enter the enter the input operation will be end.\n";
		cin.ignore();
		getline(cin,sum);
		summary <<endl<<sum;
	}
	
}
void Library::deleteTheSummary(string isbn){
	const string path=".\\Summaries\\"+isbn+".txt";
	if(remove(path.c_str())==0)
		cout <<"\nFile removed at the library.\n"; 
	else
		cout <<"\nThe summary can not found in the library!\n";
}
void Library::addWithID(int op){
	int id;
	string isbn;
	cout <<"Please enter the Book id: ";
	cin >>id;
	for(int i=0;i<LibBooks.size();i++){
		if(id==LibBooks[i].identity)
			isbn=LibBooks[i].isbn;
	}
	switch(op){
		case 1:
			addSummaryToLibrary(isbn);
			break;
		case 2:
			updateTheSummary(isbn);
			break;
		case 3:
			deleteTheSummary(isbn);
			break;


	}
		
}
void Library::addWithBookName(int op){
	string name;
	string isbn;
	cout <<"Please enter the Book name: ";
	cin >>name;
	for(int i=0;i<LibBooks.size();i++){
		if(name==LibBooks[i].name)
			isbn=LibBooks[i].isbn;
	}
	switch(op){
		case 1:
			addSummaryToLibrary(isbn);
			break;
		case 2:
			updateTheSummary(isbn);
			break;
		case 3:
			deleteTheSummary(isbn);
			break;


	}
}
void Library::addWithISBN(int op){
	string isbn;
	cout <<"Please enter the Book ISBN: ";
	cin >>isbn;
	switch(op){
		case 1:
			addSummaryToLibrary(isbn);
			break;
		case 2:
			updateTheSummary(isbn);
			break;
		case 3:
			deleteTheSummary(isbn);
			break;

	}
}
bool Library::hasASummary(string on){
	ifstream online(".\\Summaries\\"+on+".txt");
	if(online.is_open())
		return true;
	return false;
}
bool Library::hasTheBook(string on){
	for(int i=0;i<LibBooks.size();i++)
		if(on==LibBooks[i].isbn)
			return true;
	return false;
}
bool Library::hasNoSameBookAtLibrary(Book ex){
	for(int i=0;i<LibBooks.size();i++){
		if(ex.identity==LibBooks[i].identity){
			cout <<"\nLibrary has a book with same id(isbn: "
			<<LibBooks[i].isbn<<")";
			return false;
		}
		if(ex.isbn==LibBooks[i].isbn){
			cout <<"\nLibrary has a book with same isbn(isbn: "
			<<LibBooks[i].isbn<<")";
			return false;
		}
	}
	return true;
}
/*
	string name;
	string isbn;
	string author;
	string publisher;
	int identity;
	
	vector LibBooks<Book>;
	*/