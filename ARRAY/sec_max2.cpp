/*  WAP to print the second maximum number in the arrays */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<" Enter the number n :";
    cin>>n;

    int arr[n];
    cout<<" Enter the arrays :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<" The arrays are "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    int mx= -1999999;

    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
    }

    int smax= -199999;

    for(int i=0; i<n; i++){
        if(arr[i]!=mx){
            smax = max(smax,arr[i]);
        }
    }
        cout<<" The maximum number in the arrays are "<<mx<<endl;
        cout<<" The second maximum number in the arrays are "<<smax;

}