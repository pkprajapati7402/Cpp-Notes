// Perform the loop operation to create a diamond pattern for the given number of rows. Example Number of rows = 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
// Input
// The only line contains the integer n denoting the number of rows.

// Constarints
// 1 ≤ n ≤ 7
// Output
// Print the diamond pattern.
// Example
// Sample input:
// 5
// Sample output:
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *   


#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Print the top half of the diamond including the middle row
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Print the bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;
    printDiamond(n);
    return 0;
}
