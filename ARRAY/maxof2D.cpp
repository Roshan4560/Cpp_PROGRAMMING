/* WAP to find the maximum element in the given 2D array */

# include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<" Enter the m and n ";
    cin>>m>>n;

    int arr[m][n];

    cout<<" Enter the arrays are ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int smn=-1999999;
    cout<<" The arrays are ";
    for(int i=0; i<m; i++){
        cout<<endl;
        for(int j=0; j<n; j++){
            smn = max(smn,arr[i][j]);
            cout<<arr[i][j]<<"  ";
        }
    }

    cout<<endl<<" The maximum number of the 2D arrays are "<<endl<<smn;
}