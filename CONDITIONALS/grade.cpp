/* Grade according to marks */

# include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the percentage :";
    cin>>a;
    if(a<=100 && a>=81){
        cout<<"Very good percentage";
        cout<<endl<<a;
    }
    else if(a<=80 && a>=61){
        cout<<"Good percentage";
        cout<<endl<<a;
    }
    else if(a<=60 && a>=41){
        cout<<"Average percentage";
        cout<<endl<<a;
    }
    else if(a<=40){
        cout<<"Fail\n";
        cout<<"Bad percentage";
        cout<<endl<<a;
    }
    else{
        cout<<"Wrong number";
    }

    return 0;
}