#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Input and output file streams
    ifstream inputFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\data.txt");
    ofstream outputFile("C:\\Users\\Aditiya Pratap SINGH\\Desktop\\C++ CODES\\data1.txt");

    // Check if files opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error opening input file: "<< endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cerr << "Error opening output file: "<< endl;
        return 1;
    }

    char ch;

    // Read from input file and write to output file

    while (inputFile.get(ch)) { // Read one character at a time
        outputFile.put(ch);    // Write the character to the output file
    }

   /* while (!inputFile.eof()) {
        inputFile.get(ch);
        if (inputFile) { // Ensures valid input before printing
            cout << ch;
        }
    }
    */
   
    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "All characters have been successfully copied to the destination file!" << endl;

    return 0;
}
