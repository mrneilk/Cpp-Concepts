//adding two old style british currency
#include<iostream>
using namespace std;
int main(){
    char choice;
    do{
        int p1,p2,s1,s2,pe1,pe2,pt=0,st=0,pet=0;
        char dummy;
        cout<<"Enter first amount: \x9c";
        cin>>p1>>dummy>>s1>>dummy>>pe1;
        cout<<"Enter second amount: \x9c";
        cin>>p2>>dummy>>s2>>dummy>>pe2;
        pet=pe1+pe2;
        pt=p1+p2;
        st=s1+s2;
        if(pet==12){
                    pet=0;
                    st++;
                    if(st==20){
                        st=0;
                        pt++;
                        }
            }
        else if (st==20)
             {
                st=0;
                pt++;
            }
        cout<<"The Total is: \x9c"<<pt<<"."<<st<<"."<<pet<<endl;
        cout<<"Do you wish to continue (y/n)?";
        cin>>choice;
    } while(choice=='y');
    

    
    
}