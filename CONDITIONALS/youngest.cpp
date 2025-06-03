/* youngest age of three friends by nested if-else */

# include<iostream>
using namespace std;

int main(){
    int Ram,Jay,Roy;
    cout<<"Enter the Ram age :";
    cin>>Ram;
    cout<<"Enter the jay age :";
    cin>>Jay;
    cout<<"Enter the Roy age :";
    cin>>Roy;
    if(Ram<Jay){
        if(Ram<Roy){
            cout<<"Ram is the youngest boy";
        }
        else{
            cout<<"Roy is the youngest";
        }
    }
    
    else {
        if(Jay<Roy){
            cout<<"Jay is the youngest boy";
        }
        else{
            cout<<"Roy is the youngest";
        }
    }

    return 0;
}