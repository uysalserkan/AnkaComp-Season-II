#ifndef SALESPERSON_H
#define SALESPERSON_H
class SalesPerson{
private:
    static const int Aylar=12;
    double Satislar[Aylar];
    double totalAnnualSales();
public:
    SalesPerson();
    void GetSalesFromuser();
    void SetSales(int,double);
    void PrintAnnualSales();
};
#endif
