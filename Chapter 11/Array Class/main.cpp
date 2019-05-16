#include <iostream>
#include "Array.h"
using namespace std;
int main() {
	 {
	// 	Array dizi;
	// 	Array d2(5);
	// 	for (size_t i = 0; i < dizi.getsize(); i++) {
	// 		dizi[i]=i;
	// 	}
	// 	cout << dizi.getsize()<<endl<<"Assigning d2 to dizi..\n";
	// 	cout << dizi.getsize()<<endl;
	// 	if(dizi==d2){
	// 		cout <<"Diziler esit.\n";
	// 	}
	// 	else{
	// 		cout <<"Diziler esit degildir.\n";
	// 	}
	// 	if(dizi!=d2){
	// 		cout <<"Diziler esit degildir.\n";
	// 	}
	// 	else{
	// 		cout <<"Diziler esit.\n";
	// 	}
	// 	d2=dizi;
	// 	if(dizi==d2){
	// 		cout <<"Diziler esit.\n";
	// 	}
	// 	else{
	// 		cout <<"Diziler esit degildir.\n";
	// 	}
	// 	if(dizi!=d2){
	// 		cout <<"Diziler esit degildir.\n";
	// 	}
	// 	else{
	// 		cout <<"Diziler esit.\n";
	// 	}
	// 	cout <<dizi<<d2;
	// 	cin >>dizi>>d2;
	// 	cout <<dizi <<d2;
	// 	return 0;
	 }
	Array pt1(7);
	Array pt2;
	cout <<"Array pt1 size: "<<pt1.getsize()<<"\nand the array is: "<<pt1;
	cout <<"Array pt2 size: "<<pt2.getsize()<<"\nand the array is: "<<pt2;
	cin >>pt1>>pt2;
	cout <<"After inputs the arrays are: "<<pt1<<pt2;
	cout<<"Check the equality of pt1 and pt2"<<endl;
	cout <<((pt1==pt2)?"Yes they are equal with each other!\n":"No they are not equal with each other!\n");
	cout<<"Check the inequality of pt1 and pt2"<<endl;
	cout <<((pt1!=pt2)?"Yes they are not equal with each other!\n":"No they are equal with each other!\n");
	Array pt3(pt1);
	cout <<"Array pt3 size: "<<pt3.getsize()<<"\nand the array is: "<<pt3;
	cout<<"Check the equality of pt1 and pt3"<<endl;
	cout <<((pt1==pt3)?"Yes they are equal with each other!\n":"No they are not equal with each other!\n");
	cout <<"Assigning the pt2 to pt1\n";
	pt1=pt2;
	cout <<"Pt1: "<<pt1;
	cout <<"Pt2: "<<pt2;
	cout<<"Check the equality of pt1 and pt2"<<endl;
	cout <<((pt1==pt2)?"Yes they are equal with each other!\n":"No they are not equal with each other!\n");
	pt1[5]=25;
	pt1[2]=8;
	cout <<"Pt1: "<<pt1;
	try{
		cout <<"Try to assigning index 15 to 88!\n";
		pt1[15]=88;
	}
	catch(out_of_range &ex){
		cout <<"An exception occured! "<<ex.what()<<endl;
	}
}

//1 2 3 4 5 6 7 1 2 3 4 5 6 7 8 9 10
