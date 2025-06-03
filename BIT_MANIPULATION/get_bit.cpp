/* GET BIT = This function is used to find the position of the number 
    The position always start from 0 */

#include<iostream>
using namespace std;

int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int main(){               // eg= 5=>101(in binary form)
    cout<<getbit(5,1);    // position of 0 is 1
    return 0;             // position of 1 is 0
}
