#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
          for(int j=n;j>i;j--){
            cout<<" ";
        }
        
         for(int k=1;k<=i;k++){
            cout<<" *";
        }
       cout<<"\n";
    }

     for(int i=1;i<=n-1;i++){
        cout<<" ";
         for(int j=i;j>1;j--){
            cout<<" ";
        }
        
        for(int k=i;k<=n-1;k++){
            cout<<" *";
        }                               
        cout<<"\n";
    }

    return 0;

}