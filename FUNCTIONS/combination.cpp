/*    COMBINATION   */

#include<iostream>
using namespace std;

int main(){
    int n,r;
    int a=1,b=1,c=1; 
    cout<<"Enter the number n :";
    cin>>n;
    cout<<"Enter the number  r :";
    cin>>r;
    for(int i=1; i<=n; i++){
        a = a*i;
    }

     for(int i=1; i<=r; i++){
        b = b*i;
    } 
    
    for(int i=1; i<=n-r; i++){
        c = c*i;
    }


    cout<<a/(b*c);

return 0;
}