/* calculator */

# include<iostream>
using namespace std;

int main(){
    int x,y;
    char op;
    cout<<"Enter the number :";
    cin>>x;
    cin>>op;
    cout<<"Enter the number :";
    cin>>y;
    switch(op){
        case '+':
        cout<<x+y<<endl;
        break;
        case '-':
        cout<<x-y<<endl;
        break;
        case '*':
        cout<<x+y<<endl;
        break;
        case '/':
        cout<<x+y<<endl;
        break;

        return 0;
    }
}