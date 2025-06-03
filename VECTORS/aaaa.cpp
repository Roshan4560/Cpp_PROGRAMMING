/* make a matrix of m*n and two coordinates (l1,r1), (l2,r2)
   return the sum of the rectangle from (l1,r1) to (l2,r2) */

#include<iostream>
#include<vector>
using namespace std;

int matrixsum(vector<vector<int>>&arr,int l1,int r1,int l2,int r2){
    int ans =0;

    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            ans+=arr[i][j];
        }
    }

    return ans;
}

int main(){
    int m,n;
    cout<<"enter the m and n:";
    cin>>m>>n;
    cout<<endl;

    cout<<"Enter the element of matrix are:"<<endl;
    
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int l1,r1,l2,r2;
    cout<<"enter the value of l1 and r1 are:"<<endl;
    cin>>l1>>r1;
    cout<<endl;

    cout<<"Enter the value of l2 and r2 are:"<<endl;
    cin>>l2>>r2;

    cout<<"The matrix are :"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    int ans = matrixsum(arr,l1,r1,l2,r2);
    cout<<ans<<endl;

    return 0;
}