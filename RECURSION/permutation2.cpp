/*  WAP to find permutations */

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>ans;
void permute(vector<int>&a,int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size(); i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int main(){
    int n;     //  enter number eg=> 3
    cin>>n;
    vector<int>a(n);       // type the number eg=> 1,2,3
    for(auto &i : a)
    cin>>i;
    permute(a,0);
    for(auto v: ans){
        for(auto i: v)
        cout<<i<<"  ";
        cout<<"\n";
    }

    return 0;
}