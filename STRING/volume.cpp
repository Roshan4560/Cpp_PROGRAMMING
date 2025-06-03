/* WAP to input a string and count all the vowels in the given string */

# include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cout<<" Enter the string "<<endl;
    getline(cin, a);
    int count =0;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count++;
        }
    }
        cout<<count;
 }