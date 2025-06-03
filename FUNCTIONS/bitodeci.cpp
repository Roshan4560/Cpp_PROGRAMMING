/*   TO  CONVERT BINARY TO DECIMAL   */

# include<iostream>
using namespace std;

int btod(int x){
    int ans = 0;
    int r =1;
    while(x>0){
        int y= x%10;
        ans = ans + r*y;
        r = r*2;
        x = x/10;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<btod(n)<<endl;

    return 0;
}