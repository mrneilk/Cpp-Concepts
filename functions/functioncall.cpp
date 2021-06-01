//WAP to call fn and tell how many times it have been called
#include<iostream>
using namespace std;
// int count; global
void funccall(){
    static int count=0;
    // count++;
    cout<<"I have been called "<<++count<<" times since the starting of execution"<<endl;
  
}
int main(){
 
    for (int i = 0; i < 10; i++)
    {
        funccall();
    }
    
   

}