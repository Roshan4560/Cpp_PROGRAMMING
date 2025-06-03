/* make an array matrix and tilt it from the 90 degree */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number n:";
    cin>>n;
    cout<<endl;

    vector<vector<int>>a(n,vector<int>(n));

    cout<<"Enter the matrix element are :"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"The matrix are :"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(a[i][j],a[j][i]);
        }
    }

    cout<<" The 90 degree tilt matrix are:"<<endl;
    for(int i=0; i<n; i++){
            reverse(a[i].begin(), a[i].end());
        }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}