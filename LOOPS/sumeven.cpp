/* Sum of even digit number in a given number  */

# include<iostream>
using namespace std;

int main(){
    int n,a,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
        a = n%10;
        if(a%2==0){
            sum = sum + a;
        }
        n = n/10;
    }
    cout<<"Sum of the even number digit is :"<<sum;

return 0;
}