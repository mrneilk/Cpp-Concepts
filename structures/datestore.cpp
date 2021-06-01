//create structure to store date e.g 12/05/2001
#include<iostream>
using namespace std;
struct datestore
{
    int day,month,year;
};
int main(){
    datestore ob1;
    char d;
    cout<<"Enter date(DD/MM/YYYY):";
    cin>>ob1.day>>d>>ob1.month>>d>>ob1.year;
    cout<<"Your Date is "<<ob1.day<<"/"<<ob1.month<<"/"<<ob1.year;
}
