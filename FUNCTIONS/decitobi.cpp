/*    TO CONVERT DECIMAL TO BINARY FORM   */

# include<bits/stdc++.h>
using namespace std;

int decitobi(int n){
    int ans = 0;
    int x =1;
    while(x<=n)
    x = x*2;
    x = x/2;

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=2;
        ans = ans*10 + lastdigit;
       }
       return ans;
    }

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<decitobi(n);

    return 0;
}