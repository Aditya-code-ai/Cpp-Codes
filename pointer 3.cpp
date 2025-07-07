#include<iostream>
using namespace std;
void swap(int a, int b){  // call by value
    int temp= a; 
    a=b;
    b=temp;
}

void swapPointer(int *a, int *b){   // call by reference 
    int temp= *a;
    *a = *b;
    *b=temp;
    }

void swapReferenceVal(int &a, int &b){  // call by reference-value
    int temp= a; 
    a=b;
    b=temp;
}
    
int main(){
    int a=4, b=5;
    int x=4, y=5;
    swap(a,b);
    cout<<"value of a is "<<a<<" "<<"value of b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"value of a is "<<a<<" "<<"value of b is "<<b<<endl;
    swapReferenceVal(x,y); // here we are not able to put swapReferenceVal(a,b) equals to swapReferenceVal(x,y)
    cout<<"value of a is "<<a<<" "<<"value of b is "<<b<<endl;
    return 0;
}