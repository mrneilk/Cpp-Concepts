//conversion of dollar to other currencies
//BP=$1.487
//FF=$0.172
//GD=$0.584
//JY=$0.00955
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Amount in US Dollar:";
    float dolla;
    cin>>dolla;
    cout<<"US $"<<dolla<<" = "<<dolla*1.487<<" British pound"<<endl;
    cout<<"US $"<<dolla<<" = "<<dolla*0.172<<" French Franc"<<endl;
    cout<<"US $"<<dolla<<" = "<<dolla*0.584<<" German deutschemark"<<endl;
    cout<<"US $"<<dolla<<" = "<<dolla*0.00955<<" Japanese yen"<<endl;
}
