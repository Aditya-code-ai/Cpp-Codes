#include<iostream>
using namespace std;

 int foo(){
 static int m=0; // saves the current value of m
 return m++;
 }

 int main(){
 int n=100;
 for( foo (); foo()<=n; foo ())
 cout<<foo()<<" ";
 
    return 0;
 }
