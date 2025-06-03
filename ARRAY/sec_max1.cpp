/*  WAP to print the second maximum number in the arrays */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8];
    int mx= -199999;
    int smax= -19999;

    cout<<" Enter the arrays ";
    for(int i=0; i<8; i++){
        cin>>arr[i];
        cout<<"  ";
    }

    for(int i=0; i<8; i++){
        mx=max(mx,arr[i]);
    }

    for(int i=0; i<8; i++){
        if(arr[i]!=mx){
            smax = max(smax,arr[i]);
        }
    }
        cout<<" The maximum number in the arrays are "<<mx<<endl;
        cout<<" The second maximum number in the arrays are "<<smax;
}