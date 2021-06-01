//generation of fraction between 0 and 1//still getting something
#include<iostream>
using namespace std;
class fraction_gen
{
private:
    /* data */
    int num;
    int den;
    static int random;
    static int var;
    int d;
    int flag;
public:
    fraction_gen(int i);
    void frac_gen();
    ~fraction_gen();
    void showout(int j,int k){


    }
    int showresult(int &num,int &d){
        // if(n==0){
        //     cout<<"Not possible";
        //     exit(0);
        // }
        // else{
        // cout<<num<<dummy<<den;
        // }
        // return 0;
        //reduction to lowest terms
        long tnum,tden,temp,gcd;
        tnum=labs(num);
        tden=labs(d);
        if(tden==0){
            cout<<"illegal fraction:division by 0";
            exit(0);
        }
        else if(tnum==0){
            num=0;
            d=1;
            cout<<"0";
            return 0;
        }
        while(tnum!=0){
            if(tnum<tden){
                temp=tnum;
                tnum=tden;
                tden=temp;//swap
            }
            tnum=tnum-tden;//subtract them
        }
    gcd=tden;
    num=num/gcd;
    d=den/gcd;
    
    return num,d;
    }
};

fraction_gen::fraction_gen(int i)
{
    den=i;
    flag=i;
    frac_gen();
}
void fraction_gen::frac_gen(){
    int a1[100];
    int bi[100];
    for (int i = 1; i < den; i++)
    {
        
        num=i;
        int j=0;
        d=den;
        showresult(num,d);
        a1[i]=num;
        bi[i]=d;

    }
    for (int i = 1; i < flag; i++)

    {
        // cout<<a1[i]<<"/"<<bi[i];;
        // cout<<"    ";
        int ni=a1[i];
        // cout<<ni;
        int di=bi[i];
        // cout<<di;
        for (int j = 1; j<flag; j++)
        {
            cout<<a1[j]*ni<<"/"<<bi[j]*di;
            cout<<" ";
        }
        cout<<"\n";
        
    }
    
    // for (int i = 1; i < flag; i++)
    // {
        
    //     for (int j = 1; i < flag; j++)
    //     {
    //         int num1=a1[i];
    //         int den1=bi[i];
    //         cout<<a1[j]*num1<<"/"<<bi[j]*den1;
    //         cout<<"\n";
    //     }
        
    // }
    
    
    
}

fraction_gen::~fraction_gen()
{
}
int main(){
    fraction_gen ob1(5);
}