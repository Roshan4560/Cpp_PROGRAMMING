/* WAP to reverse a string using a recursion */

#include<iostream>
using namespace std;

void rev(string a){
    if(a.size()==0){
        return ;
    }
    string ros = a.substr(1);
    rev(ros);
    cout<<a[0];
}
int main(){
    string a;
    cout<<"Enter the string :";
    getline(cin,a);

    rev(a);
    
    return 0;
}