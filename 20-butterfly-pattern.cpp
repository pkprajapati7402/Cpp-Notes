// Complete the python function butterflyPattern() that takes a number n as a parameter and prints the butterfly pattern for it .
// Input

// User Task:
// Since this is a functional problem you don't have to worry about taking input, you just have to complete the function butterflyPattern() and print the output.

// Integer n represents half the row size of the pattern

// Constraint
// n<=100

// Output
// Output is a butterfly pattern in 2n rows.
// Example
// Input
// 4

// Output
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

void butterflyPattern(int n) {
    // Upper half of the butterfly pattern
    for (int i = 1; i <= n; i++) {
        // Print the first part of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print the spaces in between
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print the second part of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly pattern
    for (int i = n; i >= 1; i--) {
        // Print the first part of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print the spaces in between
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print the second part of stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;
    butterflyPattern(n);
    return 0;
}
