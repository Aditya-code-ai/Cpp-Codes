#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;

    // Allocate and initialize a vector of 5 integers
    vector<int> arr(n, 0);  // Initializes all elements to 0

    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;  // Assign values
        cout << arr[i] << " ";  // Outputs: 0 2 4 6 8
    }
    cout << endl;

    // No manual deallocation required; vector manages memory automatically
    return 0;
}
