#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend void sum(complex o1, complex o2);

public:
    complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
void sum(complex o1, complex o2)
{
    cout << o1.a + o2.a << " + " << o1.b + o2.b << "i" << endl;
}
complex ::complex(void) // ----> this is a default constructor as it takes no parameters
{
    cin >> a;
    cin >> b;
}
int main()
{
    complex c1, c2;
    c1.printNumber();
    c2.printNumber();
    sum(c1, c2);

    return 0;
}