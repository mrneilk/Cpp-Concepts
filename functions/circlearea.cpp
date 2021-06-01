//use of function to find area of circle
#include<iostream>
using namespace std;
const float PI=3.14;        //declared a constant pi value 
float circlearea(float r){  //area cal function
    return PI*r*r;
}
int main(){
    float radius;
    cout<<"Enter The radius of circle in cm:";
    cin>>radius;
    cout<<"The area of cicle is:"<<circlearea(radius)<<" cm sq.";
}