#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (cin.fail()) {   // if input is not a number
        cerr << "Error: Invalid input! Please enter a number." << endl;  // you can also use cout instead of cerr
        return 1; // Signal an error occurred
    }

    cout << "You entered: " << num << endl;

    return 0;
}
