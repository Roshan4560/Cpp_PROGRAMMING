/* WAP to print all the ASCII values and 
   their equivalent characters of 26 
   alphabets using a while loop */

# include<iostream>
using namespace std;

int main(){
    int n=65;
    while(n<=90){
        cout<<n<<" = "<<(char)n<<"\n ";
        n++;
    }

return 0;
}