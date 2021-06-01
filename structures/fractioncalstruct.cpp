//Four function calculator using structures
//adding function to this program

#include<iostream>
using namespace std;
struct fractioncalstruct
{
    int a,b,c,d;
    int num,den;
};
fractioncalstruct add(fractioncalstruct &ob){
    ob.num=(ob.a*ob.d)+(ob.b*ob.c);
        ob.den=ob.b*ob.d;
    return ob;
}
fractioncalstruct sub(fractioncalstruct &ob){
    ob.num=(ob.a*ob.b)-(ob.b*ob.c);
        ob.den=ob.b*ob.d;
    return ob;
}
fractioncalstruct multi(fractioncalstruct &ob){
    ob.num=(ob.a*ob.c);
        ob.den=ob.b*ob.d;
    return ob;
}
fractioncalstruct div(fractioncalstruct &ob){
     ob.num=(ob.a*ob.d);
        ob.den=ob.b*ob.c;
    return ob;
}
int main(){

    char choice;
    do{
    fractioncalstruct ob;
    char d1,op;
    cout<<"Enter fraction 1,operation and then fraction 2:";
    cin>>ob.a>>d1>>ob.b>>op>>ob.c>>d1>>ob.d;
    switch (op)
    {
    case '+':
        add(ob);
        cout<<"The answer = "<<ob.num<<"/"<<ob.den;
        break;
    case '-':
        sub(ob);
        cout<<"The answer = "<<ob.num<<"/"<<ob.den;
        break;
    case '*':
        multi(ob);
        cout<<"The answer = "<<ob.num<<"/"<<ob.den;
        break;
    case '/':
        div(ob);
        cout<<"The answer = "<<ob.num<<"/"<<ob.den;
        break;        
    default:cout<<"Wrong operation.";
        break;
    }
    cout<<"\nDo another (y/n)?";
    cin>>choice;
    }while(choice=='y');
}
