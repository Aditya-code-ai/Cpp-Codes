#include<iostream>
#include <cstring>
using namespace std;

union student{
   char name[100];
   int age;
   long long int ph_no;
};

int main(){
union student s1;

strcpy(s1.name,"aditya");  // we use union member only 1 at a time.
//s1.age=19;
//s1.ph_no=6392826475;
cout<<"name is "<<s1.name<<endl;
//cout<<"age is "<<s1.age<<endl;
//cout<<"phone no. is "<<s1.ph_no<<endl;
return 0;
}