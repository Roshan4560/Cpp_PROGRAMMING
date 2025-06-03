/*  Enter the number and make the array */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int array[n];
    cout<<"Enter the numbers :";
    for(int i=0; i<=n; i++){
        cin>>array[i];
    }
    
    cout<<"The array are :";
    for(int i=0; i<=n; i++){
        cout<<array[i]<<endl;;
    }

    return 0;
}