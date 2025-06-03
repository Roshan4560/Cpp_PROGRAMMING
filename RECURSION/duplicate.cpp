/*  remove all duplicates from the string 
    ex= 'aaaabbbeeecdddd' to convert into  'abecd' */

#include<iostream>

using namespace std;

string dupli(string s){
    if(s.size()==0){
        return  "";
    }
    char ch=s[0];
    string ans = dupli(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main(){
    cout<<dupli("aaaabbbeeecdddd");

    return 0;
}