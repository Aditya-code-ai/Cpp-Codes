#include<iostream>
using namespace std;
int volume(int a){
    return (a*a*a);
}

float volume(int r, int h){
    return (3.14*r*r*h);
}                               // Function overlading means use the same name function more than one time by using different number of entries.

int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    int a=1, b=2, r=3, h=4, l=5;
    cout<<"volume of cube: "<<volume(a)<<endl;
    cout<<"volume of cylinder: "<<volume(r,h)<<endl;
    cout<<"volume of rectangle: "<<volume(l,b,h)<<endl;
    return 0;
}