#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Taking input for number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declaring the array
    vector<int> arr(n);

    // Taking input for array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Printing sub-arrays grouped by length
    for (int length = 1; length <= n; length++) {
        // This will store sub-arrays of the current length
        for (int i = 0; i <= n - length; i++) {
            // Print the sub-array from index i to i + length - 1
            for (int k = i; k < i + length; k++) {
                cout << arr[k];
                if (k < i + length - 1) {
                    cout << " ";
                }
            }
            // Add a comma between sub-arrays, except after the last one
            if (i < n - length) {
                cout << ", ";
            }
        }
        cout << endl; // Move to the next line after each group
    }

    return 0;
}
