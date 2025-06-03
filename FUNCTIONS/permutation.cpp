/*    PERMUTATIONS    */

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int perm(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter the number n :";
    cin>>n;
    int r; 
    cout<<"Enter the number r :";
    cin>>r;
    int a = perm(n);
    int b = perm(n-r);
    cout<<a/b;

   return 0;
}
