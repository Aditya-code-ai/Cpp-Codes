// pattern 6: inverted half diamond
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
         for(int j=i;j>1;j--){
            cout<<" ";
        }
        
        for(int k=i;k<=n;k++){
            cout<<" *";
        }                               
        cout<<"\n";
    }
    return 0;

}