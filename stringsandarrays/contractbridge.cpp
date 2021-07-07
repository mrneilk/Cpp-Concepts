//in continuation to the card array program pg 286 of book
// create a function to divide the shuffeled card deck into 4 parts
// create 4 distinct objects of card class as array consisting 13 sub divisions
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;
///////////////
class card
{
    private:
        int number;
        Suit suit;
    public:
        card(){

        }
        void set (int n, Suit s){
            suit=s;
            number =n;
        }
        void display();

};
void card::display()
{
    if(number>=2 && number <=10)
        cout<<number;
    else
        switch (number)
        {
        case jack: cout<<"J";            break;
        case queen: cout<<"Q";            break;
        case king: cout<<"K";            break;
        case ace: cout<<"A";            break;
        }
    switch (suit)
    {
    case clubs:cout<<static_cast<char>(5);break;
    case diamonds:cout<<static_cast<char>(4);break;
    case hearts:cout<<static_cast<char>(3);break;
    case spades:cout<<static_cast<char>(6);break;
    }
}
///////
int main(){
    card deck[52];
    card user1[13],user2[13],user3[13],user4[13];
    int j;
    cout<<endl;
    for(j=0;j<52;j++){  //creating an oredered deck
        int num=(j%13)+2;
        Suit su=Suit(j/13);
        deck[j].set(num,su);
    }
    srand(time(NULL));
    for(j=0;j<52;j++){  //shuffling the deck
        int k=rand()%52;
        card temp=deck[j];
        deck[j]=deck[k];
        deck[k]=temp;    
    }
    int l=0,m=0,g=0;
    for (int i = 0; i < 52; i++)
    {
        if(i<13){
            user1[i]=deck[i];
        }
        else if(i>=13&&i<26){
            user2[l]=deck[i];
            l++;
        }
         else if(i>=26&&i<39){
            user3[m]=deck[i];
            m++;
        }
        else{
            user4[g]=deck[i];
            g++;
        }
    }
    cout<<endl;
    //display hands of the user
    l=0,m=0,g=0;
    for (int i = 0; i < 52; i++)
    {
        if(i<13){
            user1[i].display();cout<<" ";
          
        }
        else if(i>=13&&i<26){
            user2[l].display();cout<<" ";
            l++;
        }
         else if(i>=26&&i<39){
            user3[m].display();cout<<" ";
            m++;
        }
        else{
            user4[g].display();cout<<" ";
            g++;
        }
        
        if(!((i+1)%13)){//newline after 13 cards
            cout<<endl;
        }
    }

    
    return 0;
}
