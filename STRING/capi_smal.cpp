/*  All the strings element convert into UPPER CASE(capital letter form)
      or LOWER CASE (small letter form)  */

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    // // for capital letter 
    // string aa;
    // cout<<" Enter the string :"<<"  "<<endl;
    // getline(cin,aa);   // ex =kcsnLKDNma
    // cout<<" string are :"<<"  "<<aa<<endl;
    // for(int i=0; i<=aa.size(); i++){
    //     if(aa[i]>='a' && aa[i]<='z'){
    //         aa[i] -= 32;
    //     }
    // }
    // cout<<aa<<endl;


    // // for small letter 
    // string ss;
    // cout<<" Enter the string :"<<"  "<<endl;
    // getline(cin,ss);   // ex =kcsnLKDNma
    // cout<<" string are :"<<"  "<<ss<<endl;
    // for(int i=0; i<=ss.size(); i++){
    //     if(ss[i]>='A' && ss[i]<='Z'){
    //          ss[i] += 32;
    //      }
    // }
    // cout<<ss<<endl;

    // for directly method to convert any(capital or small) form
    string qq;
    cout<<" Enter the string :"<<"  "<<endl;
    getline(cin,qq);
    cout<<" string are ;"<<"  "<<qq<<endl;
    transform(qq.begin(),qq.end(),qq.begin(),::tolower);
    cout<<" lower form  :"<<"  "<<qq<<endl;
    transform(qq.begin(),qq.end(),qq.begin(),::toupper);
    cout<<" upper form  :"<<"  "<<qq<<endl;

    return 0;
}