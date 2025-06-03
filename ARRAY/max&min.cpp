/*   FIND MAX AND MIN NUMBER OF A ARRAY   */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0; i<n; i++){
        maxno = max(maxno,arr[i]);
        minno = min(minno, arr[i]);
    }
    cout<<"The max and min number are :";
    cout<<maxno<<"  "<<minno<<endl;
    return 0;
}