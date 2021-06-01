//class that imitates the functionality of int data type
//parametrized constructor can be used
#include<iostream>
//#include<conio.h>
using namespace std;
class Intclass
{
private:
    int i;
public:
    Intclass();
    ~Intclass();
    void initialize_to_int();
    void print_int();
    int ret_i(){
        return i;
    }
    void get_int(int j){
        i=j;
    }
};
void Intclass::initialize_to_int(){
    cin>>i;
}
void Intclass::print_int(){
    cout<<i;

}
Intclass::Intclass()
{
    i=0;    //c'tor defination
}

Intclass::~Intclass()
{
    // cout<<"D'tor was called";
}
int main(){
    Intclass a,b,c;
    cout<<"Enter value of integer 1:";
    a.initialize_to_int();
    cout<<"Enter value of integer 2:";
    b.initialize_to_int();
    int j;
    j=a.ret_i()+b.ret_i();
    c.get_int(j);
    cout<<"Value of sum of integer is:";
    c.print_int();
}
