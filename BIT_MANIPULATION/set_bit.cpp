/* SET BIT = set bit means in the particular position we place the value 1 */
/* INSET BIT = inset bit means in the particular position we place the value 0 */

#include<iostream>
using namespace std;

int setbit(int n,int pos){
    return (n|(1<<pos));
}

int main(){

cout<<setbit(5,1);      // eg 5=>101
return 0;               // 1 position ke 0 place per 1 lg kr ans 7 aayega

}