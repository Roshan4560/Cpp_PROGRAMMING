/* sum of subarray */

#include<iostream>
using namespace std;

int main(){
    int n,a=INT_MIN;
    cout<<"Enter the number n:"<<" ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int start=0; start<n; start++){
        int sum =0;
        for(int end=start; end<n; end++){
                sum+= arr[end];
                a =max(sum,a);
                if(a<0){
                    a=0;
                }
            }
            cout<<"  ";
        }
    cout<<a;

    return 0;
}