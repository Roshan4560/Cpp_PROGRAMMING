/* print 1 to n by the use of recursion */

#include<iostream>
 using namespace std;

// void print(int x,int n){
//     if(x>n){
//         return ;
//     }
//     cout<<x<<endl;
//     print(x+1, n);
// }

// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin>>n;
//     print(1, n);
// }

//      OR  //


void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    print(n);
}