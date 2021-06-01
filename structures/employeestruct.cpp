//create structure to store employee number and compensation used for loop array of structure
// added enum and date structure also

#include<iostream>
using namespace std;
enum etype{ labour='l',secretary='s', manager='m', accountant='a', executive='e', researcher='r'};
    struct datestore
    {
        int day,month,year;
    };
struct employeestruct
{
    int Emp_num;
    float Emp_comp;
    datestore dateofemp;
    char emptype;


};
int main(){
    employeestruct ob[3];
    char d;
    cout<<"Enter data of Employee:\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter data for Employee "<<i+1<<endl;
        cout<<"Number:";
        cin>>ob[i].Emp_num;
        cout<<"Compensation:";
        cin>>ob[i].Emp_comp;
        cout<<"Employee type(only first letter):";
        cin>>ob[i].emptype;
        cout<<"Enter date(DD/MM/YYYY):";
        cin>>ob[i].dateofemp.day>>d>>ob[i].dateofemp.month>>d>>ob[i].dateofemp.year;

    }
    cout<<"Data of Employees:\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"data for Employee "<<i+1<<endl;
        cout<<"Number:";
        cout<<ob[i].Emp_num;
        cout<<"   Compensation:";
        cout<<ob[i].Emp_comp;
        cout<<endl;
        switch (ob[i].emptype)
    {
    case 'l':
            cout<<"Employee type:Labour";
        break;
    case 's':
            cout<<"Employee type:Secretary";
        break;
    case 'm':
        cout<<"Employee type:Manager";
        break;
    case 'a':
        cout<<"Employee type:Accountant";
        break;
    case 'e':
        cout<<"Employee type:Executive";
        break;
    case 'r':
        cout<<"Employee type:Researcher";
        break;
    }     
    cout<<endl;
    cout<<"Date Of Employement:"<<ob[i].dateofemp.day<<"/"<<ob[i].dateofemp.month<<"/"<<ob[i].dateofemp.year<<endl;
   }
    

}