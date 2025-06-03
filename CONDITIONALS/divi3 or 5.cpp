/* divisible by 3 or 5 but not divisible by 15 */

# include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number :";
    cin>>x;
    if((x%5==0 || x%3==0) && x%15!=0){
        cout<<"It is divisible by 5 or 3";
    }
    else{
        cout<<"It is not divisible by 5 or 3";
    }

    return 0;
}