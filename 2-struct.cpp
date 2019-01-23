#include <iostream>
using namespace std;
struct student{
    char name[20],surname[20];
    double midtermex,finalex;
};
int PassOrFail(double, double);
int main(){
    struct student boys[3];
    for(int i=0;i<3;i++){
        cout << "Name: ";
        cin >>boys[i].name;
        cout << "Surname: ";
        cin >>boys[i].surname;
        cout <<"Midterm Exam: ";
        cin >>boys[i].midtermex;
        cout <<"Final Exam: ";
        cin >>boys[i].finalex;
    }
    
    for(int i = 0; i < 3; i++){
        cout <<boys[i].name<<" "<<boys[i].surname<<" ";
        if(PassOrFail(boys[i].midtermex,boys[i].finalex))
            cout <<"Gecti!"<<endl;
        else  
            cout <<"Kaldi!"<<endl;
    }
    
}

int PassOrFail(double mex, double fex){
    if((mex*30/100)+(fex*70/100)>60)
        return 1;
    return 0;
}
//Enter three student info(name, surname, midterm, final) and calculate they passed or failed.(%60 or upper passed)(midterm %30 final %70)