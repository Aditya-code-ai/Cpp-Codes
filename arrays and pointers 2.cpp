#include<iostream>
using namespace std;
int main(){
    int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,12,13}};
    cout<<++*(*(arr+2)+1);
    return 0;
}