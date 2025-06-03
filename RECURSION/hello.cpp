/* pirnt hello world by the use of recursion */

# include<iostream>
using namespace std;

void hel(int n){
    if(n==0){
        return ;
    }
    cout<<"Hello World"<<endl;
    hel(n-1);
}

int main(){

    hel(5);
}