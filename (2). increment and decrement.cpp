#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    //Arithmetic operators
    cout<<"#1. Arithmetic Operators"<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl<<endl;
    //Relational operators 
    a=4; b=5;
    cout<<"#2. Relational Operators"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl<<endl;
    //Logical Operators
    a=4; b=5;
       cout<<"#3. Logical Operators"<<endl;
       cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
       cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
       cout<<"The value of this logical not operators(!(a==b)) is: "<<(!(a==b))<<endl;
       
return 0;
}