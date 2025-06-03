#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &s:a)
    cin>>s;

    for(auto s:a)
    cout<<s;

    return 0;
}