#include <iostream>
#include <string>
#include <iomanip>
#include "BasePlus.h"
#include "CommissionEmployee.h"
int main() {
    CommissionEmployee RMZ{"RAMIZ","KARAESKI","25-08-1998",2500,0.8};
    CommissionEmployee *RMZPTR=0;
    BasePlus EZEL{"EZEL","BAYRAKTAR","23-7-2012",1000,0.7,2500};
    BasePlus *EZELPTR=0;
    cout <<fixed<<setprecision(2);
    cout <<"Static binding..\n\n";
    RMZ.print();
    cout <<endl;
    EZEL.print();

    RMZPTR=&RMZ;
    EZELPTR=&EZEL;
    cout <<"Dynamic bindin..\n\n";
    RMZPTR->print();
    cout <<endl;
    EZELPTR->print();

    RMZPTR=&EZEL;
    cout <<"Calling virtual functions.\n\n";
    RMZPTR->print();
}
