/* WAP to check if a given number is power of 2 by bit manipulataion */

#include<iostream>
using namespace std;

int powerof(int n){
    return (n && !(n & n-1));
}

int main(){

    cout<<powerof(14);

    return 0;
}