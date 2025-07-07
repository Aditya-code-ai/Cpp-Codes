#include<iostream>
using namespace std;
int main(){
    int marks[]={10,20,30,40,50};
    int *p=marks;
    cout<<"value 1:"<<*p<<endl;
    cout<<"value 2:"<<*(p+1)<<endl;
    cout<<"value 3:"<<*(p+2)<<endl;
    cout<<"value 4:"<<*(p+3)<<endl;
    cout<<"value 5:"<<*(p+4)<<endl;

    return 0;
}