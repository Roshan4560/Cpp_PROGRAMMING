/*   SUM OF 1 TO N TERMS OF A NUMBER   */

# include<bits/stdc++.h>
using namespace std;

int num(int x){
    int sum=0;
    for(int i=1; i<=x; i++){
        sum=sum+i;
    }
    cout<<sum;

    return sum;
}

int main(){
    
    int n;
    cout<<"Enter  the number n:";
    cin>>n;
    num(n);

    return 0;
}