/* Take a input a number and divisible by 5 or not */

# include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number n :";
    cin>>x;
    if(x%5==0){
        cout<<"The number is divisible by 5\n";
    }
    else{
        cout<<"The number is not divisible by 5\n";
    }

    return 0;
}