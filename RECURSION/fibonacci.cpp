/* WAP to print the fibonacci series by the use of recursion and function */

# include<bits/stdc++.h>
using namespace std;

int fibo(int x){
    if(x==1)return 1;
    if(x==0)return 0;

    return fibo(x-1) + fibo(x-2);
}

int main(){
    int n;
    cout<<" Enter the the value of n ";
    cin>>n;
    cout<<fibo(n);
}