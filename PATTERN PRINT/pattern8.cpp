/* print the pattern 
   1 
   A B 
   1 2 3 
   A B C D  */

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2==0){
                cout<<(char)(64+j)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}