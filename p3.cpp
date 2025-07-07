// pattern 3: inverted half-triangle 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=i;k<=n;k++){
            cout<<"*";
        }                                // interchange two for loops and get inverted half-triangle 2

        for(int j=i;j>1;j--){
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;

}