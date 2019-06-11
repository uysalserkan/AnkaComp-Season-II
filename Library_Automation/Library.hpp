#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
static int howmanybook;
//# TODO # isbn numarası olmayan kitapları kütüphaneden sil.
//# TODO # Books a bool isnowhere ekle. 
//# TODO # 1 saniyede 1 harf gelen sisteme bak.
//# TODO # Kitap kütüphanede değilse kimde olduğu ne zaman geleceği yazılacak.
//# TODO # emanet verilen kitaplar ayrı bi dosya içinde tutulacak ve silinmeyecek.
//# TODO # bir kitabın kütüphanede olup olmadığını emanet dosyasından okunacak.
//# TODO # ayni isbn veya id de girerse hata mesajı göstersin ekranda
//# TODO # Kitap ekleme silme güncelleme işlemlerini yap.
class Date{
private:
	int year,month,day;
	friend class Library;
public:
	Date(int y, int m, int d):year(y),month(m),day(d){;}
};

class Book{
private:
	string name;
	string isbn;
	string author;
	string publisher;
	int identity;
public:
	Book(){;}
	Book(string n,string i,string a, string p, int id):name(n),isbn(i),author(a),publisher(p),identity(id){howmanybook++;}
	friend ostream &operator<<(ostream& out, const Book& ex);
	friend istream &operator>>(istream& in, Book &ex);
	friend class Library;
};

class Person{
private:
	string name,surname,idnumber;
	friend class Library;
public:
	Person(string n,string s,string id):name(n),surname(s),idnumber(id){;}
	friend ostream &operator<<(ostream& out, const Person ex);
};

class Library{
private:
	vector<Book> LibBooks;
public:
	Library();
	void takeDatas();
	void WriteToSystem();
	void addBookToLibrary();//ayni id&&isbn de kitap girilemez eklenecek
	void showBooksAtLibrary();//geliştirilecek emanetleri göstermicek
	void checkMatchingBooks();
	void addSummary();
	void addSummaryToLibrary(string);
	void updateSummary();
	void updateTheSummary(string);
	void deleteSummary();
	void deleteTheSummary(string);
	void addWithBookName(int);
	void addWithID(int);
	void addWithISBN(int);
	bool hasASummary(string);
	bool hasTheBook(string);
	int operation();
	bool hasNoSameBookAtLibrary(Book);
};


//Other functions prototypes

#endif //LIBRARY_HH

//# DONE # Özet güncelleme,silme.
//# DONE # Ana menü kısmını düzenleme.
//# DONE # addWithID gibi fonksiyonları modülerize et.
//# DONE # Her kitap için kısa özel içeren bi txt olacak ve txt adı id olacak.