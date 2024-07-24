// Good Number
// Medium
// 2x
// xp icon
// 0/40
// Time Limit: 2, Memory Limit: 128000
// You are given a number n, You have to tell if the number is good, a good number is the number whose count of factors is prime.
// Input
// The first line contains a single Integer n.

// Constraints:-
// 1 ≤ n ≤ 1000
// Output
// Print true if n is a good number, otherwise false.
// Example
// Sample Input 1:
// 4

// Sample Output 1:
// true

// Explanation 1:
// factors of 4= 1,2 and 4.
// and count of factors = 3, which is prime.


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
	int n;
    cin >> n;
    int count = 0;
    // couting the factors.
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    int a = isPrime(count);
    if(a){
        cout << "true\n";
    } else{
        cout << "false\n";
    }
    return 0;
}

