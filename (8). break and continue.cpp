#include<iostream>
using namespace std;
int main(){
    int i;
    for( i=0;i<10;i++){
        if(i==2){
            break;         // stop the command 
        }
        cout<<i<<endl;
    }cout<<endl<<endl;
    
    for( i=0;i<10;i++){
        if(i==2){
            continue;      // continue the command except the current condition 
        }
        cout<<i<<endl;
    }

    return 0;
}