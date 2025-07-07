#include<iostream>
using namespace std;
class student{
    private:
    int scId ;
    char gp;
    public:
    int grade(int n);
    void subject();

};

int student:: grade(int n){

    if(n>91 && n<100){
        cout<<"A";
    }else if(n>81 && n<90){
        cout<<"B";
    }else if(n>71 && n<80){
        cout<<"C";
    }else if(n>61 && n<70){
        cout<<"D";
    }else if(n>51 && n<60){
        cout<<"E";
    }else{
        cout<<"F";
    }
    return gp;
}

void student:: subject(){
    int a,b,c,d,e,f;
    cout<<"CS-101: ";
    cin>>a;
    cout<<endl;
    cout<<"ME-111: ";
    cin>>b;
    cout<<endl;
    cout<<"EC-101: ";
    cin>>c;
    cout<<endl;
    cout<<"CE-101: ";
    cin>>d;
    cout<<endl;
    cout<<"CH-101: ";
    cin>>e;
    cout<<endl;
    cout<<"MA-101: ";
    cin>>f;
    cout<<endl;

    grade(a); cout<<endl;
    grade(b); cout<<endl;
    grade(c); cout<<endl;
    grade(d); cout<<endl;
    grade(e); cout<<endl;
    grade(f); cout<<endl;
}
int main(){
    student s1;
    s1.subject();
    return 0;
}