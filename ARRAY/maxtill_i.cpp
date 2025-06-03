/*  find the maximum number of the series  */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int mx = -19999999;
    int n;
    cout<<"enter the n:";
    cin>>n;

    int a[n];
    cout<<"The series of n are:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx,a[i]);
    }
    cout<<"The maximum number of the series is:";
    cout<<mx<<endl;
    return 0;
}
