//print the table of the given number 10 col and 20 lines
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num,i=0,j;
    cout<<"Enter a Number:";
    cin>>num;
    while (i<200)
    {
        i++;
        cout<<setiosflags(ios::right)<<setw(4)<<num*i<<" ";
        if (i%10==0)
         {
             cout<<endl;
         }
    }
    
    // do
    // {
    //  if (i%10==0)
    //     {
    //         cout<<endl;
    //     }
    //     cout<<num*i<<" ";
    //     i++;   

    // } while (i<=100);
    
    
}