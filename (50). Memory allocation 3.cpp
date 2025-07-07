#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Allocate memory for an array of 5 integers (uninitialized)
    int* arr = new int[n];

    // Access and modify array elements
    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;  // Assign values
        cout << arr[i] << " ";  // Outputs: 0 2 4 6 8
    }
    cout << endl;

    delete[] arr;  // Deallocate memory
    return 0;
}
