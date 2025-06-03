/*   SWAP TWO NUMBERS  */

# include<iostream>
using namespace std;

void swap(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 34;
    int y = 87;
    cout<<x<<"  "<<y<<endl;
    swap(x,y);
    cout<<x<<"   "<<y<<endl;
}