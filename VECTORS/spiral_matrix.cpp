/* make the matrix of square matrix and print in the spiral way */

# include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>spiralmatrix(int n){

    vector<vector<int>>a(n,vector<int>(n));
    int value =1;

    // spiral matrix 
    int row_start =0,row_end =n-1;
    int column_start =0, column_end=n-1;

    while(row_start<=row_end  &&  column_start<=column_end){

    // for row_start to row_end 
    for(int i=column_start; i<=column_end; i++){
        a[row_start][i]=value++;
        }
        row_start++;

    // for column_start to column_end 
    for(int i=row_start; i<=row_end; i++){
        a[i][column_end]=value++;
    }
        column_end--;

    // for row_end to row_start 
    for(int i=column_end; i>=column_start; i--){
        a[row_end][i]=value++;
    }
        row_end--;

    // for column_end to column_start 
    for(int i=row_end; i>=row_start; i--){
        a[i][column_start]=value++;
    }
        column_start++;
  }

  return a;

} 

int main(){
    int n;
    cout<<"Enter the n:";  // enter the n which is n*n matrix 
    cin>>n;

    vector<vector<int>>a(n,vector<int>(n));

    a = spiralmatrix(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}