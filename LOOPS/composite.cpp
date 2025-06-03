/* COMPOSITE NUMBER */

# include<iostream>
using namespace std;

int main(){
    int n,count = 0;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count = count +1;
        }
    }
        if(count>2){
            cout<<"COMPOSITE NUMBER";
        }
        else {
            cout<<"PRIME NUMBER";
        }

    return 0;
}