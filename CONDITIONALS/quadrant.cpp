/* To find out the quadrant */

# include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the x :";
    cin>>x;
    cout<<"Enter the y :";
    cin>>y;
    if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"4th Quradrant";
    }
    else if(x>0 && y==0){
        cout<<"X-axis";
    }
    else if(x==0 && y>0){
        cout<<"Y-axis";
    }
    else{
        cout<<"Origin";
    }

    return 0;
}