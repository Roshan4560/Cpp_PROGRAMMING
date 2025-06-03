/*   PRIME NUMBER  */

# include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    int m = n/2;
    cout<<"Enter the number n:";
    cin>>n;
    for(int i=1; i<=m; i++){
        if(n%i==0){
            count = count + 1;
        }
    }
    if(count>2){
        cout<<"COMPOSITE NUMBER";
    }
    else{
        cout<<"PRIME NUMBER";
    }
    return 0;
}