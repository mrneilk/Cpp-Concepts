//create class to store employee number and compensation used for loop array of class
// added enum and date class also

#include<iostream>
using namespace std;
//enum etype{ labour='l',secretary='s', manager='m', accountant='a', executive='e', researcher='r'};
    class datestore
    {
        int day,month,year;
        char d;
        public:
        datestore(){
            day=0;
            month=0;
            year=0;
        }
        void getdate(){
            cin>>day>>d>>month>>d>>year;
        }
        void putdate(){
            cout<<"Date Of Employement:"<<day<<"/"<<month<<"/"<<year<<endl;
        }
    };
class employeestruct
{
    private:
    int Emp_num;
    float Emp_comp;
    datestore dateofemp;
    char emptype;
    public:
    employeestruct(){
        Emp_num=0;
        Emp_comp=0;
        emptype=' ';
    }
    void getdata(){
        cout<<"Number:";
        cin>>Emp_num;
        cout<<"Compensation:";
        cin>>Emp_comp;
        cout<<"Employee type(only first letter):";
        cin>>emptype;
        cout<<"Enter date(DD/MM/YYYY):";
        dateofemp.getdate();       

    }
    void putdata(){
        cout<<"Number:";
        cout<<Emp_num;
        cout<<"   Compensation:";
        cout<<Emp_comp;
        cout<<endl;
        switch (emptype)
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
    dateofemp.putdate();

    }


};
int main(){
    employeestruct ob[3];
    char d;
    cout<<"Enter data of Employee:\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter data for Employee "<<i+1<<endl;
       ob[i].getdata();
    }
    cout<<"Data of Employees:\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"data for Employee "<<i+1<<endl;
        ob[i].putdata();   
   
   }
    

}