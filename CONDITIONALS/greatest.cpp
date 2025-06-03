/* Greatest of three numbers */

# include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<endl;
    cout<<"Enter the Second number :";
    cin>>b;
    cout<<endl;
    cout<<"Enter the Third number :";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is the greatest number"<<endl;
        cout<<a;
    }
    else if(b>a && b>c){
        cout<<"b is the greatest number"<<endl;
        cout<<b;
    }
    else{
        cout<<"c is the greatest number"<<endl;
        cout<<c;
    }

    return 0;
}