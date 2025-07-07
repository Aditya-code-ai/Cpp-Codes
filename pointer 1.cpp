// call by value
#include<iostream>
using namespace std;
void increment(int a){
    a=a+1;
}

void incrementPointer(int *a){
    *a=*a+1;
}

int main(){
 int a=10;
 increment(a);
 cout<<"a is "<<a<<endl; // output: a is 10
 incrementPointer(&a);
 cout<<"a is "<<a<<endl; // output: a is 11
    
    return 0;
}