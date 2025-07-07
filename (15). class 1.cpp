#include<iostream>
using namespace std;

class Employee{   // classes are extension of structure in c 
    private:
    int a, b, c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1); // declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
       
    }
};

void Employee :: setData(int a1, int b1, int c1){    // if you want then you can write function content at the time of declaration only.
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee aditya;
    // aditya.a=1; aditya.b=2; aditya.c=3; this will throw error as they are in private class.
    aditya.d=4;
    aditya.e=5;
    aditya.setData(1,2,3);
    aditya.getData();
    
    return 0;
}