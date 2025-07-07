#include <iostream>
#include <cstdlib>  // For malloc and free
using namespace std;

int main() {
    int n = 5;

    // Allocate memory for an array of 5 integers
    int* arr = (int*)malloc(n * sizeof(int));

    if (arr == nullptr) {
        cerr << "Memory allocation failed!" << endl;
        return 1;
    }

    // Access and modify array elements
    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;  // Assign values
        cout << arr[i] << " ";  // Outputs: 0 2 4 6 8
    }
    cout << endl;

    free(arr);  // Deallocate memory
    return 0;
}
