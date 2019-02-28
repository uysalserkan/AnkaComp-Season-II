#include <iostream>
#include <iomanip>
#include "SalesPerson.h"
using namespace std;
SalesPerson::SalesPerson(){
    for (size_t i = 0; i < Aylar; i++) {
            Satislar[i]=0.0;
        }
}
void SalesPerson::GetSalesFromuser(){
        double SalesFigure;
        for (size_t i = 1; i <= Aylar; i++) {
            cout <<"Enter the sales of the "<<i<<"'th' month: ";
            cin >>SalesFigure;
            SetSales(i,SalesFigure);
        }
}
void SalesPerson::SetSales(int ay, double value){
        if((ay>=1&&ay<=12)&&(value>0))
            Satislar[ay-1]=value;
        else
            cout <<"Your inputs are not correct!"<<endl;
}
void SalesPerson::PrintAnnualSales(){
    cout << setprecision(2)<<fixed<<"\nTotal Annual Sale is: €"<<totalAnnualSales()<<endl;
}
double SalesPerson::totalAnnualSales(){
        double TotalSale=0.0;
        for (size_t i = 0; i < Aylar; i++) {
            TotalSale=TotalSale + Satislar[i];
        }
        return TotalSale;
}
