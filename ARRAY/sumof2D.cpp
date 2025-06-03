/*  WAP to add the 2D arrays  */

#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n;
cout<<" Enter the m and n";
cin>>m>>n;

int a[m][n],b[m][n],c[m][n];

cout<<" Enter the arrays 1 ";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
}

cout<<" Enter the arrays 2 ";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>b[i][j];
    }
}

cout<<" The sum of the arrays 1 and 2 are ";
for(int i=0; i<m; i++){
    cout<<endl;
    for(int j=0; j<n; j++){
        cout<<a[i][j]+b[i][j]<<"  ";
    }
}

return 0;
}