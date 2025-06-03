/* WAP to print reverse of a number */

# include<iostream>
using namespace std;

int main(){
    int n,a,rev=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    cout<<"Reverse is :"<<rev;

return 0;
}