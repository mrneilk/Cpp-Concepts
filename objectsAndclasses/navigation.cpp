//class to create navigation system used in ships
#include<iostream>
using namespace std;
class navigation
{
private:
    int deg;
    float min;
    char dir;
    int ship_no;
public:
    navigation(/* args */);
    ~navigation();
    void getdir(){
        cout<<"Enter ship Number";
        cin>>ship_no;
        cout<<"Degrees:";
        cin>>deg;
        cout<<"minutes:";
        cin>>min;
        cout<<"enter long/lati:";
        cin>>dir;

    }
    void putdir(){
        cout<<" ship number "<<ship_no<<" is:";
        cout<<deg<<"\xF8"<<min<<"'"<<dir;
    }
};

navigation::navigation(/* args */)
{
    deg=0;
    min=0.0;
    dir=' ';
    ship_no=0;

}

navigation::~navigation()
{
}
int main(){
    navigation nav;
    char ch='y';
    while (ch=='y')
    {
        cout<<"Enter ship number and coordinates:\n";
        nav.getdir();
        cout<<"updated position for";
        nav.putdir();
        cout<<"\nWant to Update Position(y/N):";
        cin>>ch;
    }
    

}
