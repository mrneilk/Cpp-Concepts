//basics britishcurrency.cpp alterratrion using structure
//added functions to it
#include<iostream>
using namespace std;

struct britishcurrstruct
{
    int pound,shilling,pence;
};
britishcurrstruct change(britishcurrstruct &c1, float &currnew){
    float fractionpart;
    c1.pound=static_cast<int>(currnew);
        fractionpart=currnew-c1.pound;
        float shillingnew=fractionpart*20;
        c1.shilling =static_cast<int>(shillingnew); //casting to int from float
        float f2=shillingnew-c1.shilling;
        float pen=f2*12;
        c1.pence=static_cast<int>(pen);
    return c1;
}
int main(){
    float currnew=0;
    britishcurrstruct c1;
    cout<<"Enter New currency pounds:";
    cin>>currnew;
    change(c1,currnew);
    cout<<"Equivalent in old Notation="<<"\x9c"<<c1.pound<<"."<<c1.shilling<<"."<<c1.pence;  


}