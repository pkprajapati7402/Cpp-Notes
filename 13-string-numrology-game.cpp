// Shivam – a mysterious individual known for his unique ability to predict the fortunes. People would flock to him, seeking insight into the nature of their days.

// Shivam believed that the sum of the *values of all characters in a name held a secret code that unveiled the quality of one's day. He devised a method: by summing the values of all characters and dividing it by 3, he could discern whether a day would be "Bad, " "Good, " or "Excellent. " If the remainder of this division was 0, it would be a "Bad" day; if the remainder was 1, it would be a "Good" day; and if the remainder was 2, it would be an "Excellent" day.

// Help him find the nature of the day of people. Given a persons name, determine the person's day.

// (Value of a character is defined as : 1 for ‘a’, 2 for ‘b’, 3 for ‘c’, and so on.. and the names are case insensitive i. e. value of (a) is same as that of (A)).
// Input
// A string "name": representing the name of the person (string contains only lowercase alphabets).

// Constraints
// 1 <= |name| <= 106
// Output
// Print a string ("Bad, " "Good, " or "Excellent").
// Example
// Input
// shivam

// Output
// bad


// Explanation
// Value of s: 19
// Value of h: 8
// Value of i: 9
// Value of v: 22
// Value of a: 1
// Value of m: 13
// Sum of all the values is: 72; Which is divisible by 3. So, the day is "Bad".

#include <iostream>
#include <string>
using namespace std;

string determineDayQuality(const string& name) {
    int sum = 0;
    for (char c : name) {
        sum += (tolower(c) - 'a' + 1);
    }

    int remainder = sum % 3;
    if (remainder == 0) {
        return "Bad";
    } else if (remainder == 1) {
        return "Good";
    } else {
        return "Excellent";
    }
}

int main() {
    string name;
    cin >> name;
    cout << determineDayQuality(name) << endl;
    return 0;
}
