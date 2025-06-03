/* N times querries */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;  // enter the n(where n is no. of box in the array)
    cin>>n;

    vector<int>a(n); // take input of the array
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    const int N = 1e5 + 10;
    vector<int>fre(N,0);      
    for(int i=0; i<n; i++){
        fre[a[i]]++;
    }
    int q;
    cout<<"Enter queries";
    cin>>q;

    while(q--){
        int element;
        cin>>element;
        cout<<element<<" is ";
        cout<<fre[element]<<" times ";
        cout<<endl;
    }

    return 0;
}