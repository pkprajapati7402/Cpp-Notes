// Binary search is a realife technique to search elements via grouping and shorting the data.
// In this we sort the array first.
// Then take the middle number and compared to get the side we have to move.
// Again we move into the second short group. and we stop when a single digit is left.


#include <iostream>
using namespace std;

int search(int low, int high, int key, int a[]) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            return mid; 
        } else if (a[mid] < key) {
            return search(mid + 1, high, key, a); 
        } else {
            return search(low, mid - 1, key, a); 
        }
    }
    return -1;

}
int main() {
    int n, a[1000], key;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter Key to search: ";
    cin >> key;


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // Using function and recursion to perform binary search
    int value = search(0, n - 1, key, a);
    if (value != -1) {
        cout << "Value found at position " << value + 1 << ".\n"; // Position is 1-based
    } else {
        cout << "Not Found!";
    }
    return 0;
}
