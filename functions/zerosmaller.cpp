//fn to make a smaller int out of two int zero
#include<iostream>
using namespace std;
int zeroSmaller(int &a, int &b){    //call by reference calls the address 
    if(a>b){                        //and changes the value at the original address
        b=0;                        //will change the value at the address of n1 and n2
    }
    else
        a=0;
    return a,b;    
}
int main(){
    int n1,n2;
    cout<<"enter a:";
    cin>>n1;
    cout<<"enter b:";
    cin>>n2;
    zeroSmaller(n1,n2);
    cout<<"Value of a:"<<n1;
    cout<<"\nValue of b:"<<n2;
}