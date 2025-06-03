/* WAP to find the unique number by the use of vector */
 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {1,1,2,3,4,4,2};
    int ans = 0;

    for(int a: v){
       ans = ans^a;
    }
    cout<<ans<<endl;

    return 0;
}