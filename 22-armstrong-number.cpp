/*Given an integer N, your task is to print all the Armstrong numbers which are present between 1 to N. A number is said to Armstrong if it is equal to sum of cube of its digits.
Example:- 153 can be written as sum of its cube i.e. 13+53+33 which is equal to the original number 153 thus it is an armstrong number. Note that digits are powered to 3 because number of digits in 153 is 3.
Input
The input contains a single integer N.

Constraints:-
1 < = N < = 1000
Output
Print all the number which are armstrong numbers less than equal to N.
Example
Sample Input:-
2

Sample Output:-
1

Sample input:-
4

Sample Output:
1*/

#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    
    return sum == original;
}

void printArmstrongNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    printArmstrongNumbers(N);
    
    return 0;
}
