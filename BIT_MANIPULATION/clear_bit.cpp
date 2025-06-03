/* CLEAR BIT = isme hum kisi bhi position ke 1 ko 0 me 
       or 0 ko 0 me convert krte hai */

#include<iostream>
using namespace std;

int clearbit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int main(){                 // eg= 5=>101
    cout<<clearbit(5,0);   // hm zero position ke 1 ko 0 me convert kr dege 
                          // tb answer 100 => 4 ho jayega 
    return 0;
}