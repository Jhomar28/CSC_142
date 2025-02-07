#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string filename = "output.txt";
    ofstream fileOut(filename);  // File for output

    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    // Writing input and results to the file
    if (number > 0) {
        fileOut << "You entered: " << number << "\n";

        // Conditional check for even or odd
        if (number % 2 == 0) {
            fileOut << number << " is even.\n";
        } else {
            fileOut << number << " is odd.\n";
        }

        // Loop to write numbers up to input
        fileOut << "Counting up to " << number << ":\n";
        for (int i = 1; i <= number; i++) {
            fileOut << i << " ";
        }
        fileOut << endl;
    } else {
        fileOut << "Invalid input. Please enter a positive number.\n";
    }

    fileOut.close();  // Close the file
    cout << "Results saved in " << filename << endl;

    return 0;
}

