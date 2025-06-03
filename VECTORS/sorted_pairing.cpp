/* pair sum problem if array are sorted */

#include<iostream>
#include<vector>
using namespace std;

vector<int>pairsum(vector<int>v,int target){
    vector<int>ans;
    int i=0, j=4-1;

    while(i<j){
        int sum = v[i] + v[4-1];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int>v = {2,7,11,15};
    int target = 26;

    vector<int>ans = pairsum(v,target);
    cout<<"coordinates are:"<<ans[0]<<","<<ans[1];

    return 0;
}