#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Temprature in degree celcius:";
    float deg;
    cin>>deg;
    float degfar=(deg*9/5)+32;
    cout<<"Temprature in degree fahrenheit:"<<degfar;
}