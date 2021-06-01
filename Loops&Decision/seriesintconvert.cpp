//reading individual number and combining it to a single log int (6 digit)
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    cout<<"Enter a number:";
    long int num=0,i=0,num2;
    char num1;
    // num1=getche();
    // cout<<endl<<num1<<endl;
    // num2=num1-'0';
    // cout<<num2*10;
    do
    {
        num1=getche();
        num2=num1-'0';
        num=num*10+(num2);
        i++;
    } while (i<6);
    
    // while (i<6)
    // {
    //    num1=getche();
    //    num2=num1-'0';
    //    num+=(num2)*10;
    //    i++;
    // }
     cout<<"\nThe Number is:"<<num;
    
}