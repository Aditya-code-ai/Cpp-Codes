#include<iostream>
using namespace std;
int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast, m2=lunch, m3=dinner;
    cout<<m1<<endl<<m2<<endl<<m3<<endl; // or in place of m1, m2, m3 directly name is also used. 
    return 0;
}