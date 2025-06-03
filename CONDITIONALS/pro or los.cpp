/* Profit or Loss */

# include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the cost price of an item :";
    cin>>x;
    cout<<endl;
    int y,r;
    r = y-x;
    cout<<"Enter the selling price of an item :";
    cin>>y;
    if(y>x){
        cout<<"You are in PROFIT\n";
        cout<<"profit in rupees :";
        cout<<(y-x);
        cout<<endl;
        cout<<"profit in percentage :";
        cout<<((y-x)*100)/x;
    }
    else if(y==x){
        cout<<"You have neither profit nor loss :";
    }
    else{
        cout<<"You are in LOSS\n";
        cout<<"loss in rupees :";
        cout<<(x-y);
        cout<<endl;
        cout<<"loss in percentage :";
        cout<<((x-y)*100)/x;
    }

    return 0;
}