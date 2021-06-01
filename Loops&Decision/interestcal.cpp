//calculation of interest rate and total money calculator
#include<iostream>
using namespace std;
int main(){
    float pamo,inte;
    int time;
    cout<<"Enter Initial Amount:";
    cin>>pamo;
    cout<<"Enter number of Years:";
    cin>>time;
    cout<<"Enter interest rate(% per year):";
    cin>>inte;
    
    for(int i=time;i>0;i--){
        pamo+=(pamo*inte/100);
    }
    cout<<"At the end of "<<time<<" years you will have "<<pamo<<" Rupees.";

    
}