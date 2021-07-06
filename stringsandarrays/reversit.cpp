//reversing a string (array of char)
#include <iostream>
#include <string.h>
using namespace std;
char reversit(char str[]){
    // cout<<str;
    int n=strlen(str);//string.h
    for (int i = 0,j=n-1; i<n/2 ,j>=i ; i++,j--)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i];
    }
    
    return 0;
}
int main(){
    const int MAX=80;
    char str[MAX];
    cout<<"Enter string:";
    cin.get(str,MAX);//for reading embedded spaces
    reversit(str);
    
}