#include <iostream>
using namespace std;

int count = 0;

class Number
{
public:
    Number()
    {
        count++;
        cout << "This is the when constructor is called for number " << count << endl;
    }

    ~Number()
    {
        cout << "This is the when destructor is called for number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "Creating first object n1" << endl;
    Number n1;
    {
        cout << "Entering the block " << endl;
        cout << "Creating two more objects n2 and n3" << endl;
        Number n2, n3;
        cout << "Existing the block " << endl;
    }

    cout << "Back to the main" << endl;

    return 0;
}