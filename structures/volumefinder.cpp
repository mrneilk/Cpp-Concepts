//calculate volume take input in feet and inches
//using structures
#include<iostream>
using namespace std;
struct volumefinder
{
    float len_feet,len_inch,bre_feet,bre_inch,hei_feet,hei_inch;
    float volume=0;
};
int main(){
    volumefinder ob1;
    cout<<"volume finder\n";
    cout<<"Enter length(as:feet inches):";
    cin>>ob1.len_feet>>ob1.len_inch;
    cout<<"Enter Breadth(as:feet inches):";
    cin>>ob1.bre_feet>>ob1.bre_inch;
    cout<<"Enter Height(as:feet inches):";
    cin>>ob1.hei_feet>>ob1.hei_inch;
    ob1.len_feet+=ob1.len_inch/12;
    ob1.hei_feet+=ob1.hei_inch/12;
    ob1.bre_feet+=ob1.bre_inch/12;
    ob1.volume=ob1.len_feet*ob1.hei_feet*ob1.bre_feet;
    cout<<"The volume is "<<ob1.volume<<" cubic feet.";
}
