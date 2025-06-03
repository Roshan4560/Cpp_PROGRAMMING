/* WAP to find area of rectangle is greater than its perimeter */

# include<iostream>
using namespace std;

int main(){
    int length,breath;
    cout<<"Enter the length :";
    cin>>length;
    cout<<"Enter the breath :";
    cin>>breath;
    cout<<"Area :";
    cout<<length*breath;
    cout<<endl;
    cout<<"Perimeter :";
    cout<<2*(length+breath);
    cout<<endl;

    if(length*breath>2*(length+breath)){
        cout<<"Area is graeter";
    }
    else if(length*breath<2*(length+breath) ){
        cout<<"Perimeter is greater";
    }
    else{
        cout<<"Both area and perimeter are equal";
    }

    return 0;
}