// You are given a positive integer n. Your task is to write a program to print Pascal's Triangle up to the nth row. Pascal's Triangle is a triangular array of binomial coefficients, where each number is the sum of the two directly above it.
// Input
// The only line of the input contains a single integer n, representing the number of rows of Pascal's Triangle.
// Output
// Print the pascal's triangle till nth row.
// Example
// Sample Input
// 5

// Sample Input
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    // Loop 1.
    for(int i = 0; i < b; i++){
        cout << "* ";
    }
}