//to add subtract and multiply(with given float value)
#include<iostream>
using namespace std;
int main(){
    char choice;
    do{
        int p1,p2,s1,s2,pe1,pe2,pt=0,st=0,pet=0;
        char dummy,op;
        cout<<"Enter the Operation:";
        cin>>op;
        
        switch (op)
    {
    case '+':
        cout<<"Enter first amount:";
        cin>>p1>>dummy>>s1>>dummy>>pe1;
        cout<<"Enter second amount:";
        cin>>p2>>dummy>>s2>>dummy>>pe2;
        pet=pe1+pe2;
        pt=p1+p2;
        st=s1+s2;
        if(pet>11){
                    pet=pet-12;
                    st++;
                    if(st>19){
                        st=st-20;
                        pt++;
                        }
            }
        else if (st>19)
             {
                st=st-20;
                pt++;
            }
        cout<<"The Total is: \x9c"<<pt<<"."<<st<<"."<<pet<<endl;
        break;
     case '-':
            cout<<"Enter first amount:";
        cin>>p1>>dummy>>s1>>dummy>>pe1;
        cout<<"Enter second amount:";
         cin>>p2>>dummy>>s2>>dummy>>pe2;
            if(pe1<pe2)
                {
                    pe1+=12;
                    s1--;
                    pet=pe1-pe2;
                }
               else 
                {
                    pet=pe1-pe2;
                }
               if(s1<s2){
                   s1+=20;
                   p1--;
                   st=s1-s2;
               } 
               else
               {
                   st=s1-s2;
               } 
               pt=p1-p2;
            cout<<"The Total is: \x9c"<<pt<<"."<<st<<"."<<pet<<endl;
            break;
     case '*':
                 cout<<"Enter  amount:";
                cin>>p1>>dummy>>s1>>dummy>>pe1;
                cout<<"Enter a constant you want to multiply:";
                int consta;
                cin>>consta;
                pet=consta*pe1;
                st=consta*s1;
                pt=consta*p1;
                   if(pet>11){
                    pet=pet-12;
                    st++;
                    if(st>19){
                        st=st-20;
                        pt++;
                        }
            }
        else if (st>19)
             {
                st=st-20;
                pt++;
            }
        cout<<"The Total is: \x9c"<<pt<<"."<<st<<"."<<pet<<endl;
         break;
    
    default:cout<<"Wrong input";
        break;
    }
    cout<<"\nDo another (y/n)?";
    
    cin>>choice;
    }while(choice!='n');
}    