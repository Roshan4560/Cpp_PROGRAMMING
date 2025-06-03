/* continue */

# include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=20; i++){
        if(i==2) continue;
        if(i==10) continue;
        cout<<i<<"  ";
    }

return 0;
}