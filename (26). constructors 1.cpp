#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating constructor
    // constructor is a special member function  with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is aoutomatically invoked whenever an object is created

    complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // ----> this is a default constructor as it takes no parameters
{
    cin>>a; 
    cin>>b; cout<<endl;
    // cout<<"Hello World";
}
int main()
{
    complex c1;
    c1.printNumber();
    return 0;
}

/*  Characterstics of constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have defalt arguments
5. We cannot refer to their address

*/