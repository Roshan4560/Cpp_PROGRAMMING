/* Replacing data */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string dt;
    getline(cin,dt);
    for(int i=0; i<dt.size(); i++){
        if(i%2==0){
            cout<<"a";
        }
        else{
            cout<<dt[i];
        }
    }
}