// You are given a positive integer n. Your task is to print a K pattern of size n2+n-1. A K pattern consists of the letter 'K' formed by asterisks ('*') on a square grid.

// Note: Refer to example.
// Input
// The only line of the input contains a single integer n, representing the size of the pattern
// Output
// Print K pattern.
// Example
// Sample Input
// 2

// Sample Output
// **
// *
// **

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // Printing the upper half
    for(int i = 1; i <= n; i++){
        for(int j = n - i + 1; j >= 1; j--){
            cout << "* ";
        }
        cout << endl;
    }
    // Printing the second half of the pattern.
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
    
}