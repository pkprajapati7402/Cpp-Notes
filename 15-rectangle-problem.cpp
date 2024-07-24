// Given integer values M and N. Using the character ‘*’ draw a rectangle of height M and breadth N.
 
// Input
// The input contains two integers M and N.

// Constraints:-
// 3 <= M, N <= 20
// Output
// Print the rectangle as shown in the example.
// Note: There is no space in between any two rows of the pattern.
// Example
// Sample Input:-
// 3 3

// Sample Output:-
// ***
// * *
// ***


// Sample Input:-
// 5 3

// Sample Output:-
// ***
// * *
// * *
// * *
// ***
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void drawRectangle(int M, int N) {
    // Construct and print the first row
    for (int j = 0; j < N; ++j) {
        cout << '*';
    }
    cout << endl;
    
    // Construct and print the middle rows
    for (int i = 0; i < M - 2; ++i) {
        cout << '*'; // Start with the first '*'
        for (int j = 0; j < N - 2; ++j) {
            cout << ' '; // Fill the middle with spaces
        }
        cout << '*'; // End with the last '*'
        cout << endl;
    }
    
    // Construct and print the last row
    for (int j = 0; j < N; ++j) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    int M, N;
    cin >> M >> N;
    
    drawRectangle(M, N);
    
    return 0;
}