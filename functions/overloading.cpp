//create program to demonstrate overloading of functions
//will make functions inside of structures and call them
#include<iostream>
using namespace std;
const float PI=3.14;
struct overloading
{
    float radius,l,b,h,base;
    char ch;
    float area(float &r);
    float area(float &l1,float &b1,float &h1);
    float area(float &h1,float &ba1, char &c);           //overloaded functions can use diff type of arguments

};
//declaring outside of structure
float overloading::area(float &r){
    return PI*r*r;
}
float overloading::area(float &l1,float &b1,float &h1){
    return l1*b1*h1;
}
float overloading::area(float &h1, float &ba1, char &c){
    cout<<c;
    return (0.5)*ba1*h1;
}
int main(){
    overloading ob;
    cout<<"Enter choice:(T(area)/C(area)/R(cuboid vol)):";
    char choice;
    cin>>choice;
    switch (choice)
    {
    case 'C':
            cout<<"Enter Radius:";
            cin>>ob.radius;
            cout<<ob.area(ob.radius);
        break;
    case 'T':
            cout<<"Enter Height:";
            cin>>ob.h;
            cout<<"Enter Base:";
            cin>>ob.base;
            cout<<"Enter a char:";
            cin>>ob.ch;
            cout<<ob.area(ob.h,ob.base,ob.ch);
        break;
    case 'R':
            cout<<"Enter Height:";
            cin>>ob.h;
            cout<<"Enter lenght:";
            cin>>ob.l;
            cout<<"Enter breadth:";
            cin>>ob.b;
            cout<<ob.area(ob.l,ob.b,ob.h);
        break;    
    default:cout<<"Wrong Option";
        break;
    }
}