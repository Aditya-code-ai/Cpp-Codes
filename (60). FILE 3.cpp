#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Input file stream
    ifstream inputFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\data.txt");

    // Check if the file opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error opening file: "<< endl;
        return 1;
    }

    char ch;
    cout << "Contents of the file:" << endl;

    // Read and display characters from the file
    while (inputFile.get(ch)) { // Use .get() to read one character at a time
        cout << ch; // Output the character to the terminal
    }

    // Close the file
    inputFile.close();

    return 0;
}
