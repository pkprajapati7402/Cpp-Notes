//  C++ program to perform Insertion sort of an array.
//  In Insertion sort  we compare succeeding number and the if it's smaller we insert inbetween the numbers.
// Insertion Sort Algorithm:
// Start

// Assume the first element of the array is already sorted.
// Iterate

// Begin with the second element (index 1) and move to the last element of the array.
// Compare

// Compare the current element with the elements in the sorted portion of the array (the left side of the current element).
// Shift

// While the current element is smaller than any of the elements in the sorted portion, shift those elements one position to the right.
// Insert

// Insert the current element into its correct position in the sorted portion.
// Repeat

// Repeat steps 3-5 for all elements in the array.
// End

// The array is now sorted.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Element to be inserted in the sorted portion
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // Insert the key in its correct position
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Method 2
#include <iostream>
using namespace std;
int main(){
    int a[1000],n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // sorting.
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            if(a[j] < a[j-1]){
                swap(a[j],a[j-1]);
            } else{
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}