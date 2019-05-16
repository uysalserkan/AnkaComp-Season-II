#include <iostream>
#include <string>
using namespace std;
class thing{
    string name;
    int mass;
    int size;
public:
    thing(string n, int m, int s){
        name=n;
        mass=m;
        size=s;
    }
    void yaz();
};
class living: public thing{
    int age;
    bool walk;
public:
    living(string n, int m, int s,int a, bool w):thing(n,m,s){
        age=a;
        walk=w;
    }
    void livingyaz(){
        yaz();
        cout <<" Age: "<<age<<" Walk: "<<walk;
    }
};
void thing::yaz(){
    cout << "Name: "<<name<<" Mass: "<<mass<<" Size(m): "<<size;
}
int main(){
    thing stone("James", 25, 2);

    living tree("Joe",1602,15,30,0);
    stone.yaz();
    cout <<endl;
    tree.livingyaz();
}
//living'nın kalıtımı thing olacak ve öyle bişiler.
