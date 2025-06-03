/*    BASIC FUNCTIONS      */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number m :";
    cin>>m;
    cout<<"Enter the number n :";
    cin>>n;
    cout<<max(m, n)<<endl;
    cout<<min(m, n)<<endl;
    cout<<pow(m,n);

    return 0;
}