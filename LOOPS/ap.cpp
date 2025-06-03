/* Arithmatic progression */

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the  n number :";
    cin>>n;
    // 4,7,10,13...
    for(int i=4; i<=3*n+1; i+=3){
        cout<<i<<"  ";
    }
cout<<endl<<n<<"th term is :"<<3*n+1;

return 0;
}