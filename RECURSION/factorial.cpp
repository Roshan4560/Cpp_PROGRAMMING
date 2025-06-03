/* WAP to make the factorial of n by using the functions and recursion */

# include<bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x==1)return 1;
    return x * fact(x-1);
}

int main(){
    int n;
    cout<<" Enter the number n ";
    cin>>n;
    cout<<fact(n);
    
}