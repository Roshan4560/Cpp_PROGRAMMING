/*  WAP to find the transpose of the matrix */

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<" Enter the m and n ";
    cin>>m>>n;

    int arr[m][n];
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<" The Matrix are "<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<" The transpose of the matrix are "<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;                     
    }                                 

    return 0;
}