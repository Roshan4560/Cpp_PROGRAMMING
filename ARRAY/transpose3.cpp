/*  WAP to transpose the matrix (Only apply on the square matrix) */

#include<iostream>
using namespace std;

int main(){
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9} };
    
    cout<<" The Matrix are "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    

    cout<<" The Transpose of the matrix are "<<endl;
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            //swap
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    //print

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}