#include <iostream>
using namespace std;
const int LIMIT=100;
class safearray
{
private:
    /* data */
    int arr[LIMIT];
public:
   int putel(int loc,int ele){
       if(loc>LIMIT-1||loc<0)
            return 0;
       else
            arr[loc]=ele;
   }
   int getel(int pos){
       if(pos>LIMIT-1||pos<0)
            return 0;
        else
            return arr[pos];
   }
};
int main(){
    safearray sa1;
    int temp=12345;
    sa1.putel(10,temp);
    temp=sa1.getel(10);
    cout<<temp;
}
