/*  TO CONVERT HEXA TO DECIMAL FORM   */

# include<bits/stdc++.h>
using namespace std;

int hexatodeci(string x){
    int ans = 0;
    int r =1;
    int s = x.size();
    for(int i=s-1; i>=0; i--){
        if(x[i] >= '0' && x[i] <= '9'){
            ans += r*(x[i]-'0');
        }
        else if(x[i]-'A' && x[i] <= 'F'){
            ans += r*(x[i]-'A'+10);
        } 
        r = r*16;
    }
    return ans;
    
}

int main(){
    string n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<hexatodeci(n)<<endl;

    return 0;
}