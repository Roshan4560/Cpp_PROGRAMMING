/* WAP to product the given array element */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]= {1,23,5,4,7,8,9};
    int n=sizeof(a)/4;
    int pro=1;
    //cout<<" enter input ";
    //for(int i=0; i<n; i++){
    //    cin>>a[i];
    //}

    //cout<<" Enter output ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
        pro=pro*a[i];
    }

    cout<<" Product of the digit is ";
    cout<<pro;
}