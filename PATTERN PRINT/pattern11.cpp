/* print the pattern 
     4 
     3 3 
     2 2 2 
     1 1 1 1    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }

return 0;
}