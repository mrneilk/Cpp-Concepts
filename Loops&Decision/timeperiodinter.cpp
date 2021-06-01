//calculate the time period using given total amount//relate to interestcal.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float tamo,intr,pamo;
    int time=0;
    cout<<"Enter The Final amount:";
    cin>>tamo;
    cout<<"Enter the Rate of interest(% yearly):";
    cin>>intr;
    cout<<"Enter Principal amount:";
    cin>>pamo;
    

    do
    {
        pamo+=(pamo*intr/100);
        
        time++;
        if(floor(pamo)==floor(tamo)){
            break;
        }
    }while(time>0);
    
    cout<<"The time to catch up the amount will be:"<<time;

}