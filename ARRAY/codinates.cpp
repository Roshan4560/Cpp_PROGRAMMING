/* declare the matrix and find the codinates of the matrix */

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<" Enter the value of the m and n are ";
    cin>>m>>n;
    int arr[m][n];

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<" Enter the element";
    cin>>x;
    bool flag=false;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(arr[i][j]==x){
                cout<<" The cordinates are ";
                cout<<i<<" "<<j<<" "<<endl;
                flag= true;
            }
        }
    }

    if(flag){
        cout<<"The element is found ";
    }
    else{
        cout<<" The element is not found ";
    }


}