#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Open the input and output files
    FILE *p = fopen("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\numbers.txt", "r");
    FILE *p1 = fopen("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\even.txt", "w");
    FILE *p2 = fopen("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\odd.txt", "w");

    // Check if the files were opened successfully
    if (!p || !p1 || !p2) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    int n;
    // Read integers from the input file
    while (fscanf(p, "%d", &n) != EOF) {
        // Check if the number is even or odd
        if (n % 2 == 0) {
            fprintf(p1, "%d\n", n); // Write even numbers to even.txt
        } else {
            fprintf(p2, "%d\n", n); // Write odd numbers to odd.txt
        }
    }

    // Close all the files
    fclose(p);
    fclose(p1);
    fclose(p2);

    cout << "Numbers have been successfully separated into even and odd files!" << endl;

    return 0;
}
