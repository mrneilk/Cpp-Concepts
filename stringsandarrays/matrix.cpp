#include<iostream>
using namespace std;
const int MAX=10;
class matrix
{
private:
    /* data */
    int mat[MAX][MAX];
public:
    // matrix();
    int putel(int r, int c,int ele){
       if(r>MAX-1||c>MAX-1)
            return 0;
       else
            mat[r][c]=ele;
   }
   int getel(int r,int c){
       if(r>MAX-1||c>MAX-1)
            return 0;
        else
            return mat[r][c];
   }
    
};
int main(){
    matrix m1;
    int temp=12345;
    m1.putel(7,4,temp);
    temp=m1.getel(7,4);
    cout<<temp;
}
