/* pairing sum problem if array is not sorted */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>n = {2,3,5,4};
    int target = 9;
    vector<int>ans;
    for(int i=0; i<4-1; i++){
        for(int j=0; j<4; j++){
            if(n[i] + n[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            cout<<ans[0]<<","<<ans[1];
        }
    }
}

    return 0;
}