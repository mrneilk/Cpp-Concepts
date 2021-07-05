#include<iostream>
using namespace std;
int maxint(int a[],int n){
    int largest=a[0];
    int flag;
    for(int i=1; i<n; i++){
        if(a[i]>=largest){
            largest=a[i];
            flag=i;
        }
    }
    return flag;
}
int main(){
    int n;
    int arr[20];
    cout<<"Enter Number of integers:";
    cin>>n;

    cout<<"::enter the numbers in array::\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Element "<<i+1<<":";
        cin>>arr[i];
    }
    int index=maxint(arr,n);
    cout<<"largest number is: "<<arr[index];


}
