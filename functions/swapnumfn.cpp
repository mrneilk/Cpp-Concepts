//swap two numbers using function
#include<iostream>
using namespace std;
int swap(int &, int &);
int main(){
    int a,b;
    cout<<"Enter Number a:";
    cin>>a;
    cout<<"Enter Number b:";
    cin>>b;
    swap(a,b);
    cout<<"after swap a="<<a<<" b="<<b;
}
int swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    return a,b;
}