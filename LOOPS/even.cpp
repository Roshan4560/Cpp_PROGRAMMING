/* all even numbers */

# include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //     cout<<i<<endl;
    //     }
    // }


    for(int i=2; i<=n; i=i+2){ //if n is even no. print even// 
     cout<<i<<endl;     // if n is odd no. print  odd //
    }
    
    return 0;
}