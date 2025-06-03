/* Geometric Progression */

# include<iostream>
using namespace std;

int main(){
    int n,a = 1;
    cout<<"Enter the n number :";
    cin>>n;
    //1,2,4,8,16,32....
    for(int i=1; i<=n; i++){
        cout<<a<<"  ";
        a = a*2;
    }

return 0;
}