// pattern 1: half-trinagle 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
          for(int k=1;k<=i;k++){
            cout<<"*";
        }
          for(int j=n;j>i;j--){        // inter-change two for loops and get half-triangle 2
            cout<<" ";

        } cout<<"\n";
    }
    return 0;

} 