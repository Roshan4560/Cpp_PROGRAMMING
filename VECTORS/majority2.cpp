/* majority element eg={1,1,2,3,1,1} in the array q is the majority element */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool mycompare(pair<int, int>p1, pair<int, int>p2){
//     return p1.first<p2.first;
// }

int main(){
    vector<int>a = {1,2,3,2,4,2,2};
    int n = a.size();

    //sort
    sort(a.begin(), a.end());

    int fre=1,ans=a[0];
    for(int i=0; i<a.size(); i++){
        if(a[i] == a[i-1]){
            fre++;
        }
        else{
            fre = 1;
            ans = a[i];
        }
        if(fre>n/2){
            cout<<a[i];
        }
    }
    cout<<" is the majority element";

    return 0;
}