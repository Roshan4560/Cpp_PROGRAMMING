 /* Print the table of any number */

# include<iostream>
using namespace std;

int main(){
    int n,multi;
    cout<<"Enter the number n :";
    cin>>n;
    for(int i=1; i<=10; i++){
        multi = i*n;
        cout<<multi<<endl;
    }

return 0;
}