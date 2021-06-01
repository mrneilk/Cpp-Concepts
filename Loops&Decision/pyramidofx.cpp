// creating the following pattern
//  0000x   0000
//  000xx   x000
//  00xxx   xx00
//  0xxxx   xxx0
//  xxxxx   xxxx input must be less thn or equal to 20(20 line high) take as different matrix
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Number of lines:";
    int row;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i+j<row-1)
            {
                cout<<" ";
            }
            else
                cout<<"x";
        }
        for (int k = 0; k <row-1 ; k++)
        {
            /* code */
            if(i>k)
            {
                cout<<"x";
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    

}