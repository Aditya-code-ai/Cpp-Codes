#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;         // here a and b are formal parameters or variables
    return c;
}
int main(){
    int num1, num2;   // here num1 and num2 are actual parameters or variables
    cout<<"Enter the numbers: "<<endl;
   cin>>num1;                               // if you want you can put formal and actual parameters equal to each other
   cin>>num2;
   cout<<"sum is "<<sum(num1, num2)<<endl;     

    return 0;
} 
/* if you want to make a function sum after the main function then declare sum(int, int);
 before main function and make the function where you want */ 