/* WAP to print the factorial of a given number 'n' */

# include<iostream>
using namespace std;

int main(){
    int n,a,fact=1;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=n; i>=1; i--){
        fact = fact*i;
        cout<<fact<<"  ";
    }
    cout<<endl<<"factorial is :"<<fact;


return 0;
}