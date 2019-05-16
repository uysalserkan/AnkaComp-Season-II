#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // cout <<"9.999900 is shown as: "<<9.999900<<endl;
    // cout <<"9.990000 is shown as: "<<9.990000<<endl;
    // cout <<"9.000000 is shown as: "<<9.000000<<endl;
    // cout <<showpoint<<"After showing points"<<endl;
    // cout <<"9.999900 is shown as: "<<9.999900<<endl;
    // cout <<"9.990000 is shown as: "<<9.990000<<endl;
    // cout <<"9.000000 is shown as: "<<9.000000<<endl;
    int num=12345;
    cout <<setw(25)<<num<<endl;
    cout <<left << setw(25)<<num<<endl;
    cout <<right << setw(25)<<num<<endl;
    cout <<internal<<showpos<<setw(10)<<num<<endl;
}
