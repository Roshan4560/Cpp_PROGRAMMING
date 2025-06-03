/* VECTOR representation */

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // 1st method to input 
    vector<int> v;
    v.push_back(1); // isse end me 1 add ho jata hai
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"  ";  // output 1 2 3 aayega
    }
    cout<<endl;

    // 2nd method to input
    vector<int>::iterator it;
    for( it=v.begin(); it!=v.end(); it++){
        cout<<*it<<"  ";  // 1 2 3 aayega
    }
    cout<<endl;

    // 3rd method to input
    for(auto element:v){
        cout<<element<<"  "; // 1 2 3 aayega
    }
    cout<<endl;

    v.pop_back();  // 1 2
    vector<int> v2 (3,50);  // 50 50 50 

    swap(v,v2);  // isse swap ho jayega 
    for(auto element:v){
        cout<<element<<"  ";
    }
    for(auto element:v2){
        cout<<element<<"  ";
    }
    cout<<endl;

    // sort(v.begin(),v.end());

    return 0;
}