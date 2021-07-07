#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<cstdlib>
using namespace std;
string traversSTring(string &str, int N){
    // Traverse the string
    string ldouble;
    for (int i = 0; i < N; i++){
        if(str[i]>='0' && str[i]<='9' || str[i]=='.'){
            ldouble.push_back(str[i]);  //appending the new string
        }
    
    }
    return ldouble;
    
}
int main(){
    string money;
    char *pend;
    cout<<"Enter the money:";
    cin>>money;
    int n=money.length();
    string ans=traversSTring(money,n);
    cout<<ans;
    const char * c = ans.c_str();//converting to const char*
    long double moneyfinal=strtold(c, &pend);//takes const char*, the second input is endptr
    cout<<endl<<moneyfinal;
    
    
}
