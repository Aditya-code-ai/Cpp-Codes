#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n* factorial(n-1);
    }

}

int fibonacci(int n){
    if(n<2){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
     int a, b;
    cout<<"Enter the value ";
    cin>>a;
    cout<<endl<<"factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"Enter the value upto fibonacci series you want: ";
    cin>>b;
    cout<<endl<<"Fibonacci series: upto "<<b<<"th value: "<<endl;
    for(int i=1; i<=b; i++){
        cout<<fibonacci(i)<<"\t";
    }
    cout<<endl<<"value at "<<b<<"th position in fibonacci series: "<<fibonacci(b)<<endl;
    return 0;
}