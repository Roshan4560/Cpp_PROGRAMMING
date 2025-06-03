/*  form the biggest number from the numeric string  */

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string aa;                                   // enter only numbers 
    cout<<" Enter the string :"<<"  "<<endl;
    getline(cin,aa);
    cout<<" the string are :"<<"  "<<aa<<endl;
    sort(aa.begin(),aa.end(),greater<int>());
    cout<<" The biggest number are :"<<aa<<endl;

    return 0;
}