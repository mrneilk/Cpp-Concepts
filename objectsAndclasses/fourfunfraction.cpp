//four function fraction calcultao using classes
#include<iostream>
using namespace std;
class fourfunfraction
{
private:
    int a,b,c,d,num,den;
    char dummy,op;
public:
    fourfunfraction(/* args */);
    ~fourfunfraction();
    void getfractions();
    int adddata(int &a,int &b,int &c,int &d,int &num,int &den);
    int subdata(int &a,int &b,int &c,int &d,int &num,int &den);
    int muldata(int &a,int &b,int &c,int &d,int &num,int &den);
    int divdata(int &a,int &b,int &c,int &d,int &num,int &den);
    int showresult(){
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
        tden=labs(den);
        if(tden==0){
            cout<<"illegal fraction:division by 0";
            exit(0);
        }
        else if(tnum==0){
            num=0;
            den=1;
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
    den=den/gcd;
    cout<<num<<dummy<<den;
    return num,den;
    }
   
    
};
int fourfunfraction::adddata(int &a,int &b,int &c,int &d,int &num,int &den){
    num=(a*d)+(b*c);
    den=b*d;
    return num,den;
}
int fourfunfraction::subdata(int &a,int &b,int &c,int &d,int &num,int &den){
    num=(a*d)-(b*c);
    den=b*d;
    return num,den;
}
int fourfunfraction::muldata(int &a,int &b,int &c,int &d,int &num,int &den){
    num=(a*c);
    den=b*d;
    return num,den;
}
int fourfunfraction::divdata(int &a,int &b,int &c,int &d,int &num,int &den){
    num=(a*d);
    den=b*c;
    return num,den;
}
void fourfunfraction::getfractions(){
    cout<<"Enter fraction 1,operator and fraction 2:";
    cin>>a>>dummy>>b>>op>>c>>dummy>>d;
    switch (op)
    {
    case '+':
        adddata(a,b,c,d,num,den);
        break;
    case '-':
        subdata(a,b,c,d,num,den);
        break;
    case '*':
        muldata(a,b,c,d,num,den);
        break;
    case '/':
        divdata(a,b,c,d,num,den);
        break;
    default:cout<<"Wrong operation entered";
        break;
    }
    
}
fourfunfraction::fourfunfraction(/* args */)
{
    a=0;
    b=0;
    c=0;
    d=0;
    num=0;
    den=0;
    dummy='/';
    op=' ';
}

fourfunfraction::~fourfunfraction()
{
}
int main(){
    fourfunfraction ob1;
    cout<<"Enter the fractions::";
    ob1.getfractions();
    cout<<"The result is:";
    ob1.showresult();
    

}
