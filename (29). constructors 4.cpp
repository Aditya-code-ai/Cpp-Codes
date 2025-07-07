#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

    friend void distance(point, point);
    friend point dist(point, point);

public:
    point(int, int); // Parameterized constructor
    point();         // Default constructor
    void displaydata()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
};

point::point(int x, int y)
{
    a = x;
    b = y;
}

point::point()
{
    a = 0;
    b = 0;
}

void distance(point p1, point p2)
{
    cout << "Distance between p1 and p2: "
         << sqrt(((p1.a - p2.a) * (p1.a - p2.a)) + ((p1.b - p2.b) * (p1.b - p2.b))) << endl;
}

point dist(point p1, point p2)
{
    double g = sqrt(((p1.a - p2.a) * (p1.a - p2.a)) + ((p1.b - p2.b) * (p1.b - p2.b)));
    cout << "Distance between p1 and p2: " << g << endl;
    return point(); // Returning a default point object (can be modified as needed)
}

int main()
{
    point p1(0, 1);
    p1.displaydata();

    point p2(0, 6);
    p2.displaydata();

    distance(p1, p2); // call by direct function

    dist(p1, p2); // Call by class function

    return 0;
}