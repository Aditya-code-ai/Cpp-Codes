#include<iostream>
using namespace std;
int c=100;
int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is "<<c<<endl;
   cout<<"The global c is "<<::c<<endl; // :: is a scope resolution operator used to show global variable.

   float d=19.55;
   cout<<"The value in integer is "<<(int)d<<endl; // Typecasting (convert one data to another data type).
  return 0;
}