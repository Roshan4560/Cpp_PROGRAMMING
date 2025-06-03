/*  Input a string of legth greater than 5 and 
reverse the substracting from the position 
2 to 5 uing inbuilt functions */

# include<bits/stdc++.h>
using namespace std;

int main(){
    string na;
    getline(cin,na);
    cout<<" The output are ";
    cout<<na<<endl;
    
    int a= na.size();
    reverse(na.begin()+2,na.begin()+5);
    cout<<" The main outout are "<<na;

}