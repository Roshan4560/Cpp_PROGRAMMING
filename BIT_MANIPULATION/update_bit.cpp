/* UPDATE BIT = Isme hm 0 ko 1 me convert kr dege */

#include<iostream>
using namespace std;

int updatebit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n= n & mask;
    return (n|(value<<pos));
}

int main(){
    cout<<updatebit(5,1,1);    // isme 5= 101 
                             // 1 position me 0 ht ke 1 lg jayega
    return 0;                // aur answer 111 =>7 aayega
}