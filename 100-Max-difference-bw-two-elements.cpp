/*
Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 

Examples : 


Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.


Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class sol {
private:
    vector<int> arr;
    int n, c;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        if (n <= 0) {
            cout << "Invalid!" << endl;
            return; // Exit if invalid input
        } else {
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) {
                cin >> c;
                arr.push_back(c);
            }
        }
    }

    // Brute force approach
    void brutforce() {
        if (n < 2) {
            cout << "Max difference: Invalid (Array too small)" << endl;
            return;
        }

        int max_dif = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int dif = arr[j] - arr[i];
                if (dif > max_dif) {
                    max_dif = dif;
                }
            }
        }
        cout << "Max difference (Bruteforce): " << max_dif << endl;
    }

    // Optimized approach
    void optimized() {
        if (n < 2) {
            cout << "Max difference: Invalid (Array too small)" << endl;
            return;
        }

        int suffix = arr[n-1]; // Start suffix from the last element
        int maxdif = INT_MIN;

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < suffix) { // Only calculate difference if arr[i] is smaller
                int dif = suffix - arr[i];
                if (dif > maxdif) {
                    maxdif = dif;
                }
            }
            // Update the suffix maximum
            if (arr[i] > suffix) {
                suffix = arr[i];
            }
        }
        cout << "Max difference (Optimized): " << maxdif << endl;
    }
};

int main() {
    sol obj;
    obj.input();
    obj.brutforce();
    obj.optimized();

    return 0;
}

