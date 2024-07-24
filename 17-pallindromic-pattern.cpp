// You are given a positive integer N. Your task is to print the following palindromic triangle pattern. Note: A palindromic number is a number that remains the same when its digits are reversed.
//            1 
//          1 2 1 
//        1 2 3 2 1 
//     .................
// 1 2... N-1 N N-1... 2 1 
// Input
// The only input line contains an integer N.

// Constraints:
// 1 <= N <= 1000
// Output
// Print the palindromic pattern as described in the question text.
// Example
// Input
// 4

// Output
//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 


// Explanation
// We are given 4 as input so we have to print 4 rows which are symmetric at the middle.

#include <iostream>
using namespace std;

void printPalindromicTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printPalindromicTriangle(N);
    return 0;
}
