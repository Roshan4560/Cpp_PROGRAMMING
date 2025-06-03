/* WAP to print the sum of the all the elements are */

#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int m,n;
    //int a=1;
    cout<<" Enter the m and n are "<<endl;
    cin>>m>>n;

    cout<<" The element are ";
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<" The 2D arrays are "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }


    cout<<" The 2D transpose arrays are "<<endl;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
           // a=a*arr[i][j];
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    // cout<<" Sum of the elements in the 2D arrays are "<<a;
    // cout<<" Product of the elements in the 2D arrays are "<<a;


}