/* move all x to the end of the string 
   "axxbdxcefxhix" to  "abcdefhixxxxx"  */

#include<iostream>
using namespace std;

string move(string s){
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    string ans=move(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    cout<<move("abcdefhixxxxx");

    return 0;
}