/*   FIBONACCI  NUMBER     */

# include<iostream>
using namespace std;

void fibo(int q){
int sum,x=0,y=1;
cout<<x<<endl<<y<<endl;
for(int i=1; i<=q-2; i++){
sum=x+y;
x=y;
y=sum;
  cout<<sum<<endl;
}
  return;
}

int main(){
    int n;
    cin>>n;
    fibo(n);
    
    return 0;
}