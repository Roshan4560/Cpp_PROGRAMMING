/* WAP to make the n array and sum the one 
specific point to another specific point */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;           // enter the number n
    cout<<"Enter n number :";
    cin>>n;

    vector<int>v(n+1,0);       // n+1 indexing and always first element is 0

    for(int i=0; i<=n; i++){       // take inputs
        cin>>v[i];
    }

    for(int i=0; i<=n; i++){      // logic
        v[i] += v[i-1];
    }

    int q;                         // enter n times query
    cout<<"Enter queries times :";
    cin>>q;
    while(q--){
        int s,l;                     // s for starting element jaha se hm sum find krna hai
        cin>>s>>l;                   // l for last element jaha tak hme sum nikalana hai
        int ans = 0;
        ans = v[l] - v[s-1];
        cout<<ans<<endl;
    }

    return 0;
}