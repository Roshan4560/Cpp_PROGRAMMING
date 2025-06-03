/* Make an array and arrange in the order of first 
all element of the array is odd and after the even element*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortbyparity(vector<int>&v){ // function start 
    int start = 0;
    int last = v.size()-1;

    while(start<last){
        if(v[start]%2==1 && v[last]%2==0){
            swap(v[start],v[last]);
            start++;
            last--;
        }
        if(v[start]%2==0){
            start++;
        }
        if(v[last]%2==1){
            last--;
        }
    }
    return;
}

int main(){
    int n;    // enter the number n 
    cin>>n;

    vector<int>v;
    for(int i=0; i<n; i++){    //entering the element
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

        sortbyparity(v);

        for(int i=0; i<n; i++){    // ouput of the element
            cout<<v[i]<<" ";
        }
        cout<<endl;

        return 0;
}