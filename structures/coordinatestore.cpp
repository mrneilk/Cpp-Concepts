//sum of two points in 2d space using simple structure
#include<iostream>
using namespace std;
struct coordinatestore
{
    int x1,x2;
    int y1,y2;
    int x3,y3;
    void add(){
        x3=x1+x2;
        y3=y1+y2;
    }
};

int main(){
    coordinatestore ob1;
    cout<<"Enter coordinates for p1:";
    cin>>ob1.x1>>ob1.y1;
    cout<<"Enter coordinates for p2:";
    cin>>ob1.x2>>ob1.y2;
    ob1.add();      //used afunction call
    cout<<"Coordinates of p1+p2 are:"<<ob1.x3<<","<<ob1.y3;
}