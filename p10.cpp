#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value:" << endl;
    cin >> n;

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = i; j <= n; j++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int j = 1; j < (2 * i - 1); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = i; j <= n; j++) {
            cout << "*";
        }
                                           
        cout << endl;
    }

    // Lower half of the pattern
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces in the middle
        for (int j = 1; j < (2 * (n - i) + 1); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}