/* WAP to convert the decimal number to the binary number  
           binary number to the decimal number  */

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//  decimal to binary form 

// int main(){
//     int num,rem,bi=0,pow=1;
//     cout<<" Enter the decimal number :"<<" ";
//     cin>>num;

//     while(num>0){
//         rem = num%2;
//         bi+= (rem*pow);
//         pow = pow*10;
//         num = num/2 ;
//     }
//     cout<<" The binary number is "<<bi;

//     return 0;
// }

//  binary to decimal form 

int main(){
    int num,rem,ans=0,i=0;                   // num = use only 0 and 1 (binary form)
    cout<<" Enter the binary number :"<<" ";
    cin>>num;

    while(num!=0){
        rem = num%10;
        ans = ans + pow(2,i)*rem;
        num = num/10;
        i++;
    }
    cout<<" The decimal number are :"<<" "<<ans;

    return 0;
}