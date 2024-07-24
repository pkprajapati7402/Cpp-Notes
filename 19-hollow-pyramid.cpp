// Given an integer 'n', print a hollow half pyramid of size 'n'. In this pyramid, only the boundary elements are printed, and all the inner elements are replaced by spaces.
// Input
// The first line contains a single Integer n.

// Constraints
// 1 ≤ n ≤ 100
// Output
// Print hollow half pyramid of size n.
// Example
// Sample 1:
// Input:
// 4
// Output:
// 1
// 1 2
// 1    3
// 1 2 3 4
// Explanation:
// Half Pyramid:-
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// If we replace all inner elements of the half pyramid with space then it will become, a hollow half pyramid.

#include <iostream>
using namespace std;

void printHollowHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print boundary elements or spaces for inner elements
            if (j == 1 || j == i || i == n) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the hollow half pyramid: ";
    cin >> n;
    printHollowHalfPyramid(n);
    return 0;
}
