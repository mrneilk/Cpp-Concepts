//coversion from celcius to fahrenheit and vice versa
#include<iostream>
using namespace std;
int main(){
    float cel,fh,temp;
    int choice;
    cout<<"Type 1 to convert Fahrenheit to Celcius,\n     2 to convert Celcius to Fahrenheit:";
    cin>>choice;
    switch (choice)
    {
    case 1: cout<<"Enter Temprature in Fahrenheit:";
            cin>>fh;
            cout<<"In Celcius that's "<<((fh-32)*5)/9;
            break;
    case 2: cout<<"Enter Temprature in Celcius:";
            cin>>cel;
            cout<<"In Fahrenheit that's "<<(cel*9/5)+32;
            break;
    default:cout<<"Wrong Input";
        break;
    }
}