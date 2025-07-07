#include<iostream>
using namespace std;

int foo() {
    static int m=0; // saves the current value of m
    return m++;
}

int main() {
    int a = foo();
    int b = foo();
    int c = foo();
    int d = foo();
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}
