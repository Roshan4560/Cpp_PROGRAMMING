/*  Find the sum of the SUBARRAY    */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the n:";
    cin>>n;

    int arr[n];
    cout<<"The sries of n are:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    cout<<"The subarray sum is :";       // no of subarray is [(n*(n+1))/2] //
    for(int i=0; i<n; i++){
        count = 0;
        for(int j=i; j<n; j++){
            count += arr[j];
            cout<<count<<endl;
        }
    }
    return 0;
}