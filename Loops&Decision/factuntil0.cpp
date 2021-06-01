//calculate factorial untill user enters 0 as input
#include<iostream>
using namespace std;
int main(){
    unsigned int num;
    unsigned int fact = 1;
    do
    {
        cout<<"Enter A number to find its factorial:";
        cin>>num;
        if(num!=0)
        {   for (unsigned int i = num; i > 0; i--)
                {
                    fact*=i;
                }
        }        
        cout<<"factorial="<<fact<<endl;
        fact=1;
        /* code */
    } while (num!=0);
    cout<<"You Entered 0 and program terminated";
    
}