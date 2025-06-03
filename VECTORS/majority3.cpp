/* majority element eg={1,1,2,3,1,1} in the array q is the majority element */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {1,2,2,3,1,3,3,3,3};
    int n = a.size();
    int fre = 0,ans;

    for(int i=0; i<n; i++){
        if(fre == 0){
            ans = a[i];
        }
        if(ans == a[i])fre++;
        else fre--;
    }
    cout<<ans<<" is majority element ";

    return 0;
}