#include <iostream>
using namespace std;
class Matrix{
private:
    double x,y,z,t;
public:
    Matrix(double x1,double y1, double z1, double t1):z(z1),x(x1),t(t1),y(y1){}
    double det(){
        return x*t-y*z;
    }
    void print(){
        cout <<x<<" "<<y<<endl<<z<<" "<<t<<endl;
    }
};


class Ratio{
private:
    int num,den;
public:
    void assign(int, int);
    double convert();
    void invert();
    void print();
    Ratio(){num=0;den=1;}
    Ratio(int n){num=n;den=1;}
    Ratio(int n, int d){
        if(d>0)
            den=d;
        else
            den=1;
        num=n;
    }
};
void Ratio::assign(int n,int d){
    num=n;
    den=d;
}
double Ratio::convert(){
    return (double)num/(double)den;
}
void Ratio::invert(){
    int temp;
    temp=num;
    num=den;
    den=temp;
}
void Ratio::print(){
    cout <<num<<"/"<<den<<endl;
}
int main(){
 Ratio x;
 x.assign(22,7);
 cout << "x = "; x.print();
 cout << " = " << x.convert() << endl;
 x.invert();
 cout << "1/x = "; x.print();
 cout << endl;
 cout <<"-------------------------------\n";
Ratio x1;
Ratio x2(3);
Ratio x3(9,3);
x1.print();
cout <<x1.convert()<<endl;
x2.print();
cout <<x2.convert()<<endl;
x3.print();
cout <<x3.convert()<<endl;
Matrix m1(1,2,3,4);
cout <<"Determinant: "<<m1.det()<<endl;
m1.print();


}
