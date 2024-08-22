// C++ program to count the total number of targeted elements into the provided array.


#include <iostream>
#include <algorithm>
using namespace std;

int countOccurrences(int arr[], int target, int n) {
    int f = 0, l = n - 1, mid;
    int firstOccurrence = -1, lastOccurrence = -1;
    
    // Find the first occurrence of the target
    while (f <= l) {
        mid = f + (l - f) / 2;
        if (arr[mid] == target) {
            firstOccurrence = mid;
            l = mid - 1; // Move to the left to find the first occurrence
        } else if (arr[mid] < target) {
            f = mid + 1;
        } else {
            l = mid - 1;
        }
    }

    if (firstOccurrence == -1) {
        // Target is not present in the array
        return 0;
    }
    
    f = 0, l = n - 1;

    // Find the last occurrence of the target
    while (f <= l) {
        mid = f + (l - f) / 2;
        if (arr[mid] == target) {
            lastOccurrence = mid;
            f = mid + 1; // Move to the right to find the last occurrence
        } else if (arr[mid] < target) {
            f = mid + 1;
        } else {
            l = mid - 1;
        }
    }

    // The number of occurrences is the difference between the last and first indices + 1
    return lastOccurrence - firstOccurrence + 1;
}

int main() {
    int n, arr[1000], target;
    cout << "Enter n: "; cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter target value: "; cin >> target;
    sort(arr, arr + n);
    cout << "Occurrences: " << countOccurrences(arr, target, n) << endl;
    return 0;
}



// Method 2. Bruteforce method.
#include <iostream>
using namespace std;
int main(){
    int n, a[1000], targ, count = 0;
    cout << "Enter n: "; cin >> n;
    cout << "Enter target value: "; cin >> targ;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == targ){
            count++;
        }
    }
    cout << "occurence: " << count << endl;
    return 0;
}