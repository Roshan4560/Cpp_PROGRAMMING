/*  Find the linear position of a number  */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key,i;
    cout<<"Enter the key :";
    cin>>key;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"The linear position is "<<++i;
        }
    }
        if(arr[i] != key){
            cout<<" The Position is not found ";
            }
    return 0;
}