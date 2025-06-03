/* Input a string of even length and reverse the first half of the string */

# include<bits/stdc++.h>
using namespace std;

int main(){
    string am;
    getline(cin,am);
    cout<<" The output are "<<endl;
    cout<<am<<endl;

    // cout<<" The size of the length are "<<n<<endl;
    int n= am.length();

    // cout<<" The reverse output are "<<endl;
    // reverse(am.begin(),am.end());
    // cout<<am<<endl;

    cout<<" The half length reverse output are "<<endl;
    reverse(am.begin(),am.begin()+n/2);
    cout<<am<<endl;

}