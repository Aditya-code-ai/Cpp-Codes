#include<iostream>
using namespace std;

struct student {
    int x;
    int y;
};

int main() {
    struct student s1;
    s1.x = 3;
    s1.y = 4;

    cout<<s1.x<<"\t"<<s1.y<<endl;

    struct student *s2;
    s2=&s1;

    s2->x=5;
    s2->y=6;

   cout<<s1.x<<"\t"<<s1.y<<endl;
    cout<<s2->x<<"\t"<<s2->y<<endl;

    struct student *s3;
    s3=malloc(sizeof(struct student));

    s3->x=7;
    s3->y=8;
 
    cout<<s3->x<<"\t"<<s3->y<<endl;

    (*s3).x=9;
    (*s3).y=10;

    cout<<(*s3).x<<"\t"<<(*s3).y<<endl;

    return 0;
}
