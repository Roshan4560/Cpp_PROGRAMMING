/* rotate the array by the k steps 
   in this program take k and rotate k times 
   arr={1,2,3,4,5} a=5,k=2
   so, rotate is {4,5,1,2,3}*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int arr[] = {3,1,2,4,5,0,8,7,9,6};
//     int size=10;
//     int k;
//     cout<<"Enter the value of k :"; 
//     cin>>k;
    
//     if(k>size){
//         k = k%size;
//     }

//     int a = size-k;

//     for(int i=a; i<size; i++){
//         cout<<arr[i];
//     }
//     for(int i=0; i<a; i++){
//         cout<<arr[i];
//     }

//     return 0;
// }


// another method 



int main(){
    vector<int>a = {3,1,2,4,5,0,8,7,9,6};
    int k;
    cout<<"Enter the value of k :"; 
    cin>>k;

    k=k%a.size();

    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());

    for(int v:a){
    cout<<v;
    }

    return 0;
}