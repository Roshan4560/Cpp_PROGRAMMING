/* WAP to count digits of a given number */

# include<iostream>
using namespace std;

int main(){
    int n,a,count = 0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
        a = n%10;
        count = count +1;
        n = n/10;
    }
    cout<<"Number of digit is :"<<count;

return 0;
}