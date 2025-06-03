/* indexing the string  */

# include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin, a);

    //s[0]='s';      // update bhi kr sakte hai

    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<a.length()<<endl;   //  s.size()  se bhi ho gayega

   // s.push_back('s');         //  isme 1 character lag jaayega last me
    // cout<<s<<endl;

  //  s.pop_back();             //  isme 1 character hat jaayega last me
   // cout<<s<<endl;

   //s.append(" Roshan ");       //  isme hm 1 word ko add kr sakte hai
   //cout<<s<<endl;

//    a = " Kumar" + a;           // essse bhi hm likh kr sakte hai 
//    cout<<a<<endl;

   //    a.clear();             //  isme pure word clear kr deta hai
   //    cout<<a;

   reverse(a.begin(),a.end());
   cout<<a<<endl;
}