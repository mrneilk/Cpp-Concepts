//queue as class
#include <iostream>
using namespace std;
class queuearray
{
private:
    /* data */
    enum {MAX=10};
    int que[MAX];
    int front, rear;

public:
    queuearray(/* args */){
        front=rear=-1;
    };
    void enque(int var){
        que[++rear]=var;
        if(rear==MAX-1)
            rear=-1;

    }
    int deque(){
        return que[++front];
    }
    
};
int main(){
    queuearray q1;
    q1.enque(11);
    q1.enque(22);
    cout<<"1:"<<q1.deque()<<endl;
    cout<<"2:"<<q1.deque()<<endl;
    q1.enque(1);
    q1.enque(2);
    q1.enque(3);
    q1.enque(4);
    cout<<"3:"<<q1.deque()<<endl;
    cout<<"4:"<<q1.deque()<<endl;
    cout<<"5:"<<q1.deque()<<endl;
    cout<<"6:"<<q1.deque()<<endl;
    return 0;
}

