/*  indexing strings  */

# include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    // // for delete 
    // string as = "lgjsfrsnslgns";
    // cout<<" Before delete :"<<"  "<<as<<endl;
    // as.erase(3,3);   // (3,3)= phele me kon se index se,dusere me kitne number tk
    // cout<<" After delete :"<<"  "<<as;
    // cout<<endl;

    // // for find 
    // string aa = "hsioghssksnsls";
    // aa.find("ss");   // ye ("ss") ka phelah index find kr ke bata deta hai 
    // cout<<aa.find("ss")<<endl;

    // //for insert 
    // string qw = " lsvsvnsvspow";
    // cout<<"before :"<<"  "<<qw<<endl;
    // qw.insert(3,"ROSHAN");
    // cout<<" after  :"<<"  "<<qw<<endl;

    // // for substring 
    // string zz = "lsnsnoilgd";
    // cout<<" string are : "<<"  "<<zz<<endl;
    // string a = zz.substr(6,4);
    // cout<<" substring are : "<<"  "<<a<<endl;

    // for sorting 
    string qq = "sfjgohazsp";
    cout<<"string are :"<<"  "<<qq<<endl;
    sort(qq.begin(), qq.end());
    cout<<"after the sort :"<<"  "<<qq<<endl;

    return 0;
}