/*    COMBINATIONS    */

#include<iostream>
#include<cmath>
using namespace std;

int comb(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
    int a = comb(n);
    int b = comb(r);
    int c = comb(n-r);
    cout<<a/(b*c);

    return 0;
}


