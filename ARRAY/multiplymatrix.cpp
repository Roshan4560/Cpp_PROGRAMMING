/*  WAP to multiply the two matrix */

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int p,q,r;
    cout<<" Enter the value of p,q,r"<<endl;
    cin>>p>>q>>r;

    int a[p][q], b[q][r];

    cout<<" The value of matrix 'a' are "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>a[i][j];
        }
    }

    cout<<" The value of matrix 'b' are "<<endl;
    for(int i=0; i<q; i++){
        for(int j=0; j<r; j++){
            cin>>b[i][j];
        }
    }

    cout<<" The matrix 'a' are "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<" the matrix 'b' are "<<endl;
    for(int i=0; i<q; i++){
        for(int j=0; j<r; j++){
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }

    int ans[p][r];
    for(int i=0; i<p; i++){
        for(int j=0; j<r; j++){
            ans[i][j] = 0;
        }
    }

    for(int i=0; i<p; i++){
        for(int j=0; j<r; j++){
            for(int k=0; k<q; k++){
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    cout<<" The multiply of matrix a and b are "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<r; j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}