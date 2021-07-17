#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<cstdlib>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
    double money;
    cout<<"Enter money:";
    cin>>money;
    ostringstream ss1;
    ss1<<fixed<<money;
    string str1 = ss1.str();
    cout<<str1<<endl;
    string final_money="$";
    int l=str1.length();
    for (int i = 0; i < l; i++)
    {
        if(str1[i]=='.'){
           final_money.push_back(str1[i]);
           final_money.push_back(str1[i+1]);
           final_money.push_back(str1[i+2]);
           break; 
        }
        if(i%3==0 && i!=0){
            final_money.push_back(',');
            final_money.push_back(str1[i]);
        }
        else{
            final_money.push_back(str1[i]);
        }
    }
    cout<<final_money;


}