/* how many numbers between 1 to n are diviible by any number */

#include<iostream>
using namespace std;

int divi(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return (c1+c2)-c3;
}

int main(){
    int n,a,b;
    cout<<" Enter the numbers "<<"  "; // number = 40
    cin>>n;
    cout<<" Enter the divisible numbers "<<"  ";  // divisible number = 5,7,
    cin>>a>>b;

    cout<<divi(n,a,b);

    return 0;
}