#include<iostream>
#include <cstring>
using namespace std;

typedef struct student{
   char name[100];
   int age;
   long long int ph_no;
}ep;                      // or not used typedef then in place of ep s1; write struct student s1;

int main(){
ep s1;

strcpy(s1.name,"aditya");
s1.age=19;
s1.ph_no=6392826475;
cout<<"name is "<<s1.name<<endl;
cout<<"age is "<<s1.age<<endl;
cout<<"phone no. is "<<s1.ph_no<<endl;
return 0;
}