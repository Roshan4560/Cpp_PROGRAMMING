/* WAP to make a area of circle, square, rectangle and triangle */

# include<iostream>
using namespace std;

int main(){
    float radius=4;
    cout<<"Area of circle is:";
    cout<<3.14*radius*radius<<endl;

    float side=4;
    cout<<"Area of a square is:";
    cout<<side*side<<endl;

    float length=12,breath=20;
    cout<<"Area of a rectangle is:";
    cout<<length*breath<<endl;

    float base=32, height=40;
    cout<<"Area of a Triangle is:";
    cout<<0.5*base*height;

    return 0;
}