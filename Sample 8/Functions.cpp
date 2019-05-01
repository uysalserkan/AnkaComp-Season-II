#include <iostream>
#include <string>
#include "Functions.hpp"
using namespace std;

//Success.
int stringlength(const string str) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {

	}
	return i;
}
//Success.
void reverse(const string str, string& rvrs) {
	int i,st_length = stringlength(str);
	cout << "string size: " << st_length << endl;
	for (i = 0; i<st_length; i++) {
		rvrs[i] = str[st_length - 1 - i];
	}
	//cout << st_length + i << endl;
	rvrs[st_length] = '\0';

}
//Success.
int wordcounter(const string str) {
	int space = 1;
	if (str[0] == '\0') {
		return 0;
	}
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			space++;
		}
	}
	return space;
}
//Success.
void catstr(string& str1, const string str2){
	int i,str1_length = stringlength(str1);
	for (i = 0; i < stringlength(str2); i++) {
		str1[str1_length + i] = str2[i];
		cout << "str1[str1_length + i]" << str1[str1_length + i] << endl;
	}
	//cout <<str1[0]<<" "<< str1[1] << " " << str1[2] << " " << str1[3] << " " << str1[4] << " " << endl;
	str1[str1_length + i] = '\0';
	
}
//Success.
bool equalstr(const string str1, const string str2){
	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] != str2[i]) {
			return false;
		}
	}
	return true;
}
//Success.
bool palindrol(const string str){
	int leng = stringlength(str);
	for (int i = 0; i < stringlength(str); i++) {
		if (str[i] != str[--leng]) {
			return false;
		}
	}
	return true;
}
//Success.
int includeword(const string str1, const string str2){
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] == str2[0]) {
			int counter=0;
			for (int j = 0; j < stringlength(str2); j++) {
				if (str1[i+j] == str2[j]) {
					counter++;
				}
				if (counter == str2.size()) {
					return i;
				}
			}
		}
	}
	return -1;
}
//Sucess.
void letsup(string& str){
	int str_length = stringlength(str);
	for (int i = 0; i < str_length; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] += 'A'-'a';
		}
	}
}