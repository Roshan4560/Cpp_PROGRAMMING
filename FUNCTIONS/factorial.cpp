/*  FACTORIAL NUMBER   */

# include<iostream>
using namespace std;

void fact(int x){
    int multi =1;
    for(int i=1; i<=x; i++){
        multi= multi*i;
    cout<<multi<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    fact(n);

    return 0;
}