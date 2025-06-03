// /* WAP to find the greatest comman factor (gcd) of a number */

 #include<iostream>
 using namespace std;

// int gcd(int a,int b){
//     int temp,count;
//     while(a!=0,b!=0){
//         temp = a-b;
//         a = b;
//         b = temp;

//         if(a<b){
//             count = a;
//             a = b;
//             b = count;
//         }
//     }
//     if(temp == 0){
//         cout<<" The greatest common factor is :"<<" "<<a;
//     }

//     return 0;
// }

// int main(){
//     int a,b;
//     cout<<" Enter the number :"<<" ";
//     cin>>a>>b;

//     gcd(a,b);

//     return 0;
// }

//                       other method 


int gcd(int a,int b){
    while(b!=0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    
    return a;
}

int main(){
    int a,b;
    cout<<" Enter the two number :";
    cin>>a>>b;

    cout<<gcd(a,b);

    return 0;
}