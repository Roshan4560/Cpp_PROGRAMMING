/*   ARMSTRONG NUMBER   */

# include<iostream>
using namespace std;

int main(){
    int n,a,temp=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        a = n%10;
        temp = temp + (a*a*a);
        n = n/10; 
    }
    cout<<temp<<endl;
    if(temp==n){
        cout<<"The number is not a ARMSTRONG NUMBER";
    }
    else{
        cout<<"The number is ARMSTRONG NUMBER";
    }
    return 0;
}