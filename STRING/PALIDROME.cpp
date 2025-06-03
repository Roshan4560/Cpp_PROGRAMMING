/* WAP to make the PALIDROME number */
  // THIS IS A ARRAY NOT A STRING   

#include<iostream>
#include<bits/stdc++.h>   

using namespace std;

int main(){
    int n;
    cout<<" Enter the elements range :"<<endl;
    cin>>n;

    char a[n+1];
    cout<<" Enter the elements :"<<endl;
    cin>>a;
    
    bool found = true;
    for(int i=0; i<=n; i++){
        if(a[i] != a[n-1-i]){
            found = 0;
            break;
        }
      }
      if(found == true){
        cout<<" The word is PALIDROME elements "<<endl;
      }
      else{
        cout<<" The Word is NOT PALIDROME elements "<<endl;
      }

    return 0;
}