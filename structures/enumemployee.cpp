//using enum to store employeee type
#include<iostream>
using namespace std;
enum etype{ labour,secretary, manager, accountant, executive, researcher};
int main(){
    cout<<"Enter Employee type(first letter only)\n(labour,secretary, manager, accountant, executive, researcher):";
    char type;
    cin>>type;
    etype emptype;
    switch (type)
    {
    case 'l':
            emptype=labour;
        break;
    case 's':
            emptype=secretary;
        break;
    case 'm':
        emptype=manager;
        break;
    case 'a':
        emptype=accountant;
        break;
    case 'e':
        emptype=executive;
        break;
    case 'r':
        emptype=researcher;
        break;
    }
    switch (emptype)
    {
    case 0:
           cout<<"Employee type is labour"; 
        break;
    case 1:
            cout<<"Employee type is secretary";
        break;
    case 2:
        cout<<"Employee type is manager";
        break;
    case 3:
        cout<<"Employee type is accountant";
        break;
    case 4:
        cout<<"Employee type is Executive";
        break;
    case 5:
        cout<<"Employee type is Researcher";
        break;
    }
}
