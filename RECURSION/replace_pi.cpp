// /* WAP replace pi with 3.14 in a string */

 #include<iostream>
 using namespace std;

// void repl(string s){
//     if(s.size() == 0){
//         return;
//     }

//     for(int i=0; i<s.size(); i++){
//         if(s[i]=='p' && s[i+1]=='i'){
//             cout<<"3.14";
//         }
//         else{
//             cout<<s[i];
//         }

//     }
// }

// int main(){
//     repl("pippxxppiixipi");

//     return 0;
// }

//             another method  

void rep(string s){
    if(s.size() == 0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        rep(s.substr(2));
    }
    else{
        cout<<s[0];
        rep(s.substr(1));
    }
}

int main(){
     rep("pippxxppiixipi");

     return 0;
 }