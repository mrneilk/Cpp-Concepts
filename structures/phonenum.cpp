//create a structure storing phone number of user as area code/exchange and number
#include<iostream>
using namespace std;
struct phonenum
{
    int area_code;
    int exc_code;
    int number;
};
int main(){
    phonenum user,sys={212,767,8900};
    cout<<"Enter Your area code,Exchange, and number(use space in between):";
    cin>>user.area_code>>user.exc_code>>user.number;
    cout<<"My number is:("<<sys.area_code<<") "<<sys.exc_code<<"-"<<sys.number<<endl;
    cout<<"Your number is:("<<user.area_code<<") "<<user.exc_code<<"-"<<user.number<<endl;
}
