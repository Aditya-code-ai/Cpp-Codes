#include<iostream>
using namespace std;
int glo=9; // here glo is global variable 
void func(){
    cout<<glo;
}

int main(){
    int glo=10; // here glo is local variable 
    cout<<glo<<"\n";
    func();
    return 0;
}