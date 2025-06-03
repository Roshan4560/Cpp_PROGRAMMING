/* COMPOSITE NUMBER by boolian type */

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    bool flag = true; // true means prime 
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = false; // false means composite 
            break; //to get out of the loop
        }
    }
    if(flag==true)cout<<"PRIME";
    else cout<<"COMPOSITE";

    return 0;
}