/*  TO CONVERT OCTA TO DECIMAL FORM   */

# include<iostream>
using namespace std;

int octodeci(int x){
    int ans = 0;
    int r =1;
    while(x>0){
        int y = x%10;
        ans = ans + r*y;
        r = r*8;
        x = x/10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<octodeci(n)<<endl;

    return 0;
}