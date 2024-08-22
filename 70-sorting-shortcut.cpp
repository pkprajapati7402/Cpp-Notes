// std::sort(arr,arr+n) available in <algorithm> library, can be used to sort the arrays.

#include <iostream>
#include <algorithm> // Required for std::sort

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Using std::sort to sort the array in ascending order
    std::sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
