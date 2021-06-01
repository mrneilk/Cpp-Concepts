//four fn calculator for fraction style input
#include<iostream>
using namespace std;
int main()
{
    char choice;
    do{
    int a,b,c,d,num=0,den=0;
    char d1,op;
    cout<<"Enter fraction 1,operation and then fraction 2:";
    cin>>a>>d1>>b>>op>>c>>d1>>d;
    switch (op)
    {
    case '+':
        num=(a*d)+(b*c);
        den=b*d;
        cout<<"The answer = "<<num<<"/"<<den;
        break;
    case '-':
        num=(a*b)-(b*c);
        den=b*d;
        cout<<"The answer = "<<num<<"/"<<den;
        break;
    case '*':
        num=(a*c);
        den=b*d;
        cout<<"The answer = "<<num<<"/"<<den;
        break;
    case '/':
        num=(a*d);
        den=b*c;
        cout<<"The answer = "<<num<<"/"<<den;
        break;        
    default:cout<<"Wrong operation.";
        break;
    }
    cout<<"\nDo another (y/n)?";
    cin>>choice;
    }while(choice=='y');
}