//check if the char is of lower case or upper case
#include<iostream>
#include<ctype.h>
using namespace std;
int checkalpha(char x){
    if(islower(x)){
        return 1;
    }
    else    //if the alphabet is uppercase
        return 0;
}
int main(){
    cout<<"Enter any alphabet:";
    char alpha;
    cin>>alpha;
    cout<<checkalpha(alpha);
}