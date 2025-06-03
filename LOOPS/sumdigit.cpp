/* WAP to print of digits of a given number */

# include<iostream>
using namespace std;

int main(){
    int n,a,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
         a = n%10;
         sum = sum + a;
         n = n/10;
    }
    cout<<"Sum of the digit is :"<<sum;

return 0;
}