/*  STAR PATTERN  
        *
      * * *
    * * * * *
    * * * * *
      * * *
        * 
*/

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        for(int i=n; i>=1; i--){
          for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}