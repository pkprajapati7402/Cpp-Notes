// You have been provided with the selling price of a book (SP), the age of the buyer (A), and their nature of work (W). Your task is to calculate the discount that a customer will receive based on the following discount rules:

// People working as 'A' or 'B' will receive a discount of 5 on the selling price

// Buyers aged 50 or above will receive additional discount 5 on the selling price


// Note: Nature of work is represented by a single upper case character. Note: Test cases are generated in a way that minimum selling price of book will never be less than 100.
// Input
// Since this is a functional problem, you don't have to take in any input. You just have to complete the getDiscount() function that takes in selling price , age , and nature of work as input.


// Constraints:
// 100 ≤ SP ≤ 106
// 10 ≤ age ≤ 100
// Nature of work = Uppercase english letter.
// Output
// Print a single integer, representing the amount of price a customer will have to pay.
// Example
// Input:
// 100
// 55
// A

// Output:
// 90

// Explanation:
// In the example, the buyer is aged 55 and has an 'A' nature of work, so they receive a 5 discount for their age and an additional 5 discount for working as 'A', resulting in a total discount of 10.
// Thus total amount they have to pay is 100 - 10 = 90


#include <iostream>
using namespace std;

void getDiscount(int SP, int age, char W) {
    int discount = 0;

    // Check for discount based on nature of work
    if (W == 'A' || W == 'B') {
        discount += 5;

        // Check for additional discount based on age for 'A' or 'B' workers
        if (age >= 50) {
            discount += 5;
        }
    }

    // Calculate final price after discount
    int finalPrice = SP - discount;

    // Print the final price
    cout << finalPrice << endl;
}

int main() {
    // Example usage
    int SP = 100;
    int age = 55;
    char W = 'A';
    getDiscount(SP, age, W); // Expected output: 90
    return 0;
}
