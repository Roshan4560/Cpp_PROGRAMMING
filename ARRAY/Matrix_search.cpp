/*  WAP to make the matrix search  
    This prpogram works only on the sorted form matrix */

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<" Enter the value of m and n ";
    cin>>m>>n;
     
    cout<<" Enter the matrix "<<endl;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
     
    cout<<" The Matrix are "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    int x,a=0,b=n-1;
    cout<<" Enter the x :"<<endl;
    cin>>x;

   bool found=false;
   while(a<m and b>=0){
      if(arr[a][b] == x){
        found =true;
       }
       if(arr[a][b] > x){
        b--;
       }
       else{
            a++;
       }
   }
   if(found){
    cout<<" Element is found ";
   }
   else{
    cout<<" Element is not found ";
   }

    return 0;
}