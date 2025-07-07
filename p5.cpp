//half-triangle 1 by matrix method 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<n<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i<j){
            cout<<" ";
        }else{
            cout<<"*";
        }
        }cout<<"\n";
    }
    return 0;
}