/*  WAP to print the sum of 1 to n numbers  */

# include<bits/stdc++.h>
using namespace std;

int sum(int x){
    if(x==1){ 
    return 1;
    }

    //sum(x-1);

    //cout<<x<<endl;

    //sum(x-1);
    return x + sum(x-1);
}

int main(){
    int n;
    cout<<" Enter the number n ";
    cin>>n;
    cout<<sum(n);
}