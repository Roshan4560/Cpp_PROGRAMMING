/* WAP to sum the given array element */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    //n=sizeof(a)/4;
    int sum=0;
    cout<<" enter input ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    cout<<" Enter output ";
    for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
        sum=sum+a[i];
    }

    cout<<" Sum of the digit is ";
    cout<<sum;
}