/* print the pattern 
     4 
     4 3  
     4 3 2 
     4 3 2 1    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }

return 0;
}