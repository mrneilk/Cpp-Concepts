//four function calculator
#include<iostream>
using namespace std;
int main(){
    double a,b;
    char op;
    fn:
    cout<<"Enter First number,operator ,second number(use space seperable):";
    cin>>a>>op>>b;
    switch (op)
    {
    case '+':
        cout<<"Answer = "<<a+b;
        break;
    case '-':
        cout<<"Answer = "<<a-b;
        break;
    case '*':
        cout<<"Answer = "<<a*b;
        break;
    case '/':
        cout<<"Answer = "<<a/b;
        break;
    
    default:cout<<"Wrong input";
        break;
    }
    cout<<"\nDo another (y/n)?";
    char choice;
    cin>>choice;
    if (choice=='y')
    {
        goto fn;
    }
    else
        exit(0);
    
}