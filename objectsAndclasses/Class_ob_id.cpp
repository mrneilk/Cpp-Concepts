//create class that contains id of each object created
#include<iostream>
using namespace std;

class Class_ob_id
{
private:
    
    int serial_num;
    static int count_id;
public:
    
    Class_ob_id(/* args */);
    ~Class_ob_id();
    int get_serial_num(){
        return serial_num;
    }
};
int Class_ob_id:: count_id=0;//static declared one member for all the objects
Class_ob_id::Class_ob_id(/* args */)
{
    count_id++;
    serial_num=count_id;
}

Class_ob_id::~Class_ob_id()
{
}
int main(){
    Class_ob_id ob1,ob2,ob3;
    cout<<"I am Object number:"<<ob1.get_serial_num()<<endl;
    cout<<"I am Object number:"<<ob2.get_serial_num()<<endl;
    cout<<"I am Object number:"<<ob3.get_serial_num()<<endl;
}
