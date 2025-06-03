/*   REVERSE NUMBER    */

# include<iostream>
using namespace std;

int main(){
    int n,r,temp=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        r = n%10;
        temp = temp*10 + r;
        n = n/10;
    }
    cout<<"reverse is "<<temp;
    return 0;
}