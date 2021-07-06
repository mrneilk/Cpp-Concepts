#include<iostream>
using namespace std;
const int MAX=100;
class fractionavg
{
private:
    /* data */
    int a,b;
    char d;
public:
    fractionavg(/* args */);
    void getfrac(){
        cin>>a>>d>>b;
    }
    int getb(){
        return b;
    }
    int geta(){
        return a;
    }
    ~fractionavg();
};

fractionavg::fractionavg(/* args */)
{
}

fractionavg::~fractionavg()
{
}
int main(){
    fractionavg ob[MAX];
    int n;
    //inputting fraction
    cout<<"enter number of fractions:";
    cin>>n;
    for(int i=0;i<n;i++){
        ob[i].getfrac();
        if (ob[i].getb()==0)
        {
           cout<<"cannot divide by zero, enter again\n";
           --i;
        }
        
    }
    int avgn=ob[0].geta(),avgd=ob[0].getb();
    //to find average
    for (int i = 1; i < n; i++)
    {
        /* code */
        avgn=avgn*ob[i].getb()+ob[i].geta()*avgd;
        avgd=avgd*ob[i].getb();
        
    }
    cout<<"Average of fractions in floating point:"<<((float)avgn/(float)avgd)/n;


}
