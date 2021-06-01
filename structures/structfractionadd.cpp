//adition and storage of fraction using structure
#include<iostream>
using namespace std;
struct structfractionadd
{
    int a,b,c,d;
    
    int num,den;
};
int main(){
    char d;
    structfractionadd ob;
    cout<<"Enter fraction 1:";
    cin>>ob.a>>d>>ob.b;
    cout<<"Enter fraction 2:";
    cin>>ob.c>>d>>ob.d;
    ob.num=((ob.a*ob.d)+(ob.c*ob.b));
    ob.den=(ob.b*ob.d);
    cout<<"The result is:"<<ob.num<<"/"<<ob.den;

}
