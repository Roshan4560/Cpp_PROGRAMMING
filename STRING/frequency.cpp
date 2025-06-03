/*  WAP to find the maximum frequency in the sentence */

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string aa;
    cout<<" Enter the sentence :"<<"  ";      // enter sentence without any space 
    getline(cin,aa);
    cout<<" the sentence are :"<<"  "<<aa<<endl;

    int freq[26];
    for(int i=0; i<26; i++){
        freq[i] =0;
    }
    for(int i=0; i<aa.size(); i++){
        freq[aa[i]-'a']++;
    }
    char ans ='a';
    int maxf = 0;
    for(int i=0; i<26; i++){
        if(freq[i]>maxf){
            maxf = freq[i];
            ans  = i+'a';
        }
    }
    cout<<"maximum frequency is :"<<maxf<<","<<ans<<endl;

    return 0;
}