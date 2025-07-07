#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void display() {
        cout << "I am a Person." << endl;
    }
};

// Derived class from Person (Multilevel Inheritance)
class Employee : public Person {
public:
    void work() {
        cout << "I am an Employee." << endl;
    }
};

// Another Base class
class Artist {
public:
    void art() {
        cout << "I am an Artist." << endl;
    }
};

// Derived class from Employee and Artist (Hybrid Inheritance)
class MultiTalented : public Employee, public Artist {
public:
    void talent() {
        cout << "I am Multi-talented." << endl;
    }
};

int main() {
    MultiTalented obj;

    // Accessing methods from different base classes
    obj.display();   // From Person
    obj.work();      // From Employee
    obj.art();       // From Artist
    obj.talent();    // From MultiTalented

    return 0;
}
