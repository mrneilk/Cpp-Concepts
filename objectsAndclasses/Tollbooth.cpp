//tollbooth class add 0.50 for paying car increment and 0 for non paying car and increment
#include<iostream>
#include<conio.h>   //getch
using namespace std;
const char ESC=27;
class Tollbooth
{
private:
    unsigned int total_car;
    double total_amount;
public:
    Tollbooth();
    ~Tollbooth();
    void paying_car();
    void non_paying_car();
    void print_all();
};

Tollbooth::Tollbooth(/* args */)
{
    total_amount=0;
    total_car=0;    //initialized the value
}

void Tollbooth::paying_car(){
    ++total_car;
    total_amount+=0.50;
}
void Tollbooth::non_paying_car(){
    ++total_car;
    
}
void Tollbooth::print_all(){
    cout<<"Total cars Passed:"<<total_car<<endl;
    cout<<"Total amount collected:"<<total_amount<<endl;
}
Tollbooth::~Tollbooth()
{
}
int main(){
    Tollbooth t;
    char ch,ch2;
    cout<<"Hello User\n";
    cout<<"Press y to enter program, n to exit right now:";
    cin>>ch;
    if(ch=='y')
    {
        goto fn;
    }
    else 
    {
        exit(0);
    }
    fn:
        cout<<"Press p for paying cars\nPress n for non-paying cars\nESC to print total and exit:";
        ch=getche();    //inputs a char
        switch (ch)
        {
        case 'p':
            t.paying_car();
            
            break;
        case 'n':
            t.non_paying_car();
            
            break;
        case ESC:
            t.print_all();
            exit(0);
            break;
        default:cout<<"Sorry wrong input";
            goto fn;
            break;
        }
        cout<<"\nWant to enter more(y/n):";
        cin>>ch;
         if(ch=='y')
    {
        goto fn;
    }
    else 
    {
        t.print_all();
        exit(0);
    }
}