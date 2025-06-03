/* TARGET SUM */
/* in the target sum we take any two and the two no. is equal 
   to the target. for ex= we have a array {3,4,6,7,1}
   3+4=7  and 6+1=7  we have only two possibilities in which their
   sum is 7. so the
    output is 2 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n:"<<" ";
    cin>>n;

    int arr[n];
    cout<<"Enter the arrays:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<"The arrays are:"<<"  ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

    int count=0;
    int target;
    cout<<"Enter the target value:"<<"  ";
    cin>>target;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){

        if(arr[i]+arr[j]==target){
        count++;
        }
      }
    }
    cout<<"The total pair are:"<<" ";
    cout<<count<<endl;

    return 0;
}