//find the possible ways in which given guest can arrange them in given number of chairs
// 6 in 4 chair will be 6x5x4x3=360
#include<iostream>
using namespace std;
int main(){
    int Guest,chairs,arr=1;
    cout<<"Enter Number of Guests:";
    cin>>Guest;
    cout<<"Enter Number of chairs:";
    cin>>chairs;
    // if(Guest==0 || chairs==0){
    //     arr=0;
    // }
    for (int i = chairs; i>0; i--,Guest--)
    {
        arr*=Guest;
    }
    if(arr==1)
    {
        arr=0;
    }
    cout<<"Total Ways are:"<<arr;

}