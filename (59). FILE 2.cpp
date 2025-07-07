#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Input and output file streams
    ifstream inputFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\numbers.txt");
    ofstream evenFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\even.txt");
    ofstream oddFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\odd.txt");

    // Check if files opened successfully
    if (!inputFile.is_open() || !evenFile.is_open() || !oddFile.is_open()) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    int n;
    // Read numbers from the input file
    while (inputFile >> n) {
        if (n % 2 == 0) {
            evenFile << n << endl; // Write even numbers to even.txt
        } else {
            oddFile << n << endl; // Write odd numbers to odd.txt
        }
    }

    // Close all files
    inputFile.close();
    evenFile.close();
    oddFile.close();

    cout << "Numbers have been successfully separated into even and odd files!" << endl;

    return 0;
}
