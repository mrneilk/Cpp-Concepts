#include<iostream>
#include<string>
using namespace std;
const int TOT=3;
class empclass
{
private:
    string s;
    long empnum;
public:
    empclass(/* args */);
    ~empclass();
    void getdata(){
        cout<<"Enter Name:";
        getline(cin>>ws,s);
        cout<<"Enter number:";
        cin>>empnum;
    }
    void putdata(){
        cout<<"Name:"+s<<endl;;
        cout<<"number:"<<empnum<<endl;
        // cin>>empnum;
    }
};

empclass::empclass(/* args */)
{
}

empclass::~empclass()
{
}

int main(){
    empclass emp[TOT];
    for (int i = 0; i < TOT; i++)
    {
        /* code */
        emp[i].getdata();
    }
     for (int i = 0; i < TOT; i++)
    {
        /* code */
        emp[i].putdata();
    }
    
}