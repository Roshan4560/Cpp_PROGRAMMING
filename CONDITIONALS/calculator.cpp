/* calculator */

# include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the x :";
    cin>>x;
    char op;
    cin>>op;
    cout<<"Enter the y :";
    cin>>y;
    if(op=='+'){
        cout<<x+y;
    }
     if(op=='-'){
        cout<<x-y;
    } if(op=='*'){
        cout<<x*y;
    } if(op=='/'){
        cout<<x/y;
    }

    return 0;
}