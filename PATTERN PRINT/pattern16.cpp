/* print the pattern  
     * * * * *
     *       *
     *       *
     *       * 
     * * * * *        */

# include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (i==1 || j==1 || j==n || i==n)    
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}