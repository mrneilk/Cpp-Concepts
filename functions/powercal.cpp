//function to calculate power //default is 2
#include<iostream>
using namespace std;
double powercal(double n, int power=2){
    double ans=1;
    for (int i = 0; i < power; i++)
    {
        ans*=n;
    }
    return ans;
}
int main(){
    int power=0;
    double exp;
    cout<<"Enter the Exponent part:";
    cin>>exp;
    cout<<"Enter the Power:";
    cin>>power;
    cout<<"The Answer is:"<<powercal(exp,power);
}