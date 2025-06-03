/*  WAP to make a largest word in a sentence */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the Element range :"<<endl;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<" Enter the elements :";
    cin.getline(arr, n);
    cin.ignore(); 

    int i=0;
    int currlen =0, mxlen =0;
    int st=0,mxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen>mxlen){
                mxlen = currlen;
                mxst = st;
               
            }
            currlen = 0;
            st = i+1;
        }
        else{
            currlen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<" The maximum word length of the sentence is :"<<mxlen<<endl;
    for(int i=0; i<mxlen; i++){
        cout<<arr[i+mxst];
    }

    return 0;
}