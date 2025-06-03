/* To check number is three digit number or not */

# include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number :";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"The number is three digit number";
    }
    else{
        cout<<"The number is not the three digit number";
    }

    return 0;
}