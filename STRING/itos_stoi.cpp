/* WAP to convert int to string  and string to int */

#include<bits/stdc++.h>
using namespace std;

int main(){

    //  for int to string 
    // int a;
    // cin>>a;

    // cout<<" The int output are "<<endl;
    // cout<<a<<endl;

    // string s= to_string(a);

    // cout<<" The string output are "<<endl;
    // s += " Roshan ";
    // cout<<s; 
    
    // for string to int 
    string str;
    getline(cin,str);
    cout<<" string output are "<<endl<<str<<endl;

    int a = stoi(str);                     // agar string ko int me change    
    cout<<" The int output are "<<endl;   //   krna chahete hai to string
    cout<<a+2<<endl;                    //  me input numbers kro tb pata chlega

}