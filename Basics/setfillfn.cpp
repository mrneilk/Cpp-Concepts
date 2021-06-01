//use of iomanip setw (sets the width) using setfill() use in the line fills with a char
//setiosflags(ios::left/right) sets the justification to either left or right
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    cout<<setfill('.')<<"1900"<<setw(6)<<"135\n"<<"1991"<<setw(5)<<setiosflags(ios::right)<<"7290";
}