#include <iostream>
using namespace std;
struct student{
    char name[20],surname[20];
    int point;
};
int main(){
    struct student stu[3],temp;
    for(int i=0;i<3;i++){
        cout << "Name: ";
        cin >>stu[i].name;
        cout << "Surname: ";
        cin >>stu[i].surname;
        cout <<"Midterm Exam: ";
        cin >>stu[i].point;
    }
    for (size_t j = 0; j < 3; j++) {

    for(int i=0;i<2;i++){
        if(stu[i].point < stu[i+1].point){
            temp = stu[i];
            stu[i] = stu[i+1];
            stu[i+1]=temp;
        }
    }
}

    for(int i=0;i<3;i++)
    cout <<stu[i].name <<" "<<stu[i].surname<<" " <<stu[i].point<<endl;
}

//Sort the points bigger to lower (entering name surname etc.).
