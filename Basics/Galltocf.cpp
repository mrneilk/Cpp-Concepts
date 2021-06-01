//1 cubic foot = 7.481 gallons
#include<iostream>
using namespace std;
float conversion(float n){
    return n*7.481;
} 

int main(){
    float gall;
    cout<<"Enter Number of Gallons:";
    cin>>gall;
    cout<<"In Cubic feet:"<<conversion(gall);
}