//program to input two distance values and return the larger value
//also use structure
#include<iostream>
using namespace std;
struct retdislarge
{
    int feet;
    float inches;
};
retdislarge findlarge(retdislarge obb1, retdislarge obb2){
    retdislarge ob3;
    if(obb1.inches==12)
        {
            obb1.inches=0;
            obb1.feet+=1;
        }
    if(obb2.inches==12)
        {
            obb2.inches=0;
            obb2.feet+=1;
        }    
    if(obb1.feet>obb2.feet)
    {
        ob3=obb1;
    }
    else if (obb1.feet==obb2.feet)
    {
        if (obb1.inches>obb2.inches)
        {
            ob3=obb1;
        }
        else if (obb1.inches==obb2.inches)
        {
            ob3=obb1;
        }
        else
            {
                ob3=obb2;
            };          
    }
    else{
        ob3=obb2;
    } 
    return ob3;   //while using if elif must return avalue at function end
}
int main(){
    retdislarge ob1,ob2,ob3;
    cout<<"Enter Distance 1(feet inches):";
    cin>>ob1.feet>>ob1.inches;
    cout<<"Enter Distance 2(feet inches):";
    cin>>ob2.feet>>ob2.inches;
    ob3=findlarge(ob1,ob2);//call to the function passed the objects of structure
    cout<<"larger distance is:"<<ob3.feet<<"\'"<<ob3.inches<<"\"";
    
}