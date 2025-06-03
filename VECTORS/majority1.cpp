/* majority element eg={1,1,2,3,1,1} in the array q is the majority element */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a = {1,2,2,3,3,1,2,2,2};
    int fre;
    int n = a.size();

    for(int vol:a){
         fre = 0;

        for(int el:a){
            if(el == vol){
                fre++;
            }
        }
    if(fre>n/2){
        cout<<vol<<"  ";
        }
    }
        cout<<endl;
    cout<<" which is "<<fre<<" times";

    return 0;
}