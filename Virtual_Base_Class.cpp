#include <iostream>
using namespace std;

class student{
protected:
    int roll_num;
public:
    void get_num(int a){
        roll_num=a;
    }
    void put_num(void){
        cout <<"Roll number: "<<roll_num<<endl;
    }
};

class test:virtual public student{
protected:
    float part1,part2;
public:
    void get_marks(float x,float y){
        part1=x;
        part2=y;
    }
    void put_marks(void){
        cout <<"Marks obtained: "<<endl<<"Part 1: "<<part1<<endl
        <<"Part 2: "<<part2<<endl;
    }
};
class sports:public virtual student{
protected:
    float score;
public:
    void get_score(float s){
        score=s;
    }
    void put_score(void){
        cout <<"Sports wt: "<<score<<endl<<endl;
    }
};
class result:public test,public sports{
private:
    float total;
public:
    void display(void){
        total=part1+part2+score;
        put_num();
        put_marks();
        put_score();

        cout <<"Total Score: "<<total<<endl;
    }
};

int main(){
    result std1;
    std1.get_num(1234);
    std1.get_marks(27.5,33.4);
    std1.get_score(6.0);
    std1.display();
}