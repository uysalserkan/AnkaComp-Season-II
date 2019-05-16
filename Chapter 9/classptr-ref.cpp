#include <iostream>
using namespace std;
class Count{
private:
    int x;
public:
    void SetX(int key){
        x=key;
    }
    void yaz(){
        cout <<x<<endl;
    }
};
int main(){
    Count cnt;
    Count *cntptr=&cnt;
    Count &cntref=cnt;
    cout <<"Setting cnt and printing: ";
    cnt.SetX(1);
    cnt.yaz();
    cout <<"Setting the *cntptr and printing: ";
    cntptr->SetX(2);
    cntptr->yaz();
    cout <<"Setting the &cntref and printing: ";
    cntref.SetX(3);
    cntref.yaz();
}
