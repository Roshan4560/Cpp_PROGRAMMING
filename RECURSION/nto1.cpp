/* print n to 1 by the use recursion */

#include<iostream>
using namespace std;

void hel(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    hel(n-1);
}

int main(){
    int x;
    cout<<"Enter the number n :";
    cin>>x;
    hel(x);
}