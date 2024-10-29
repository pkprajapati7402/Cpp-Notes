#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& arr) {
    if (arr.empty()) return 0;

    int left = 0, right = arr.size() - 1;
    int leftMax = arr[left], rightMax = arr[right];
    int trappedWater = 0;

    while (left < right) {
        if (leftMax < rightMax) {
            left++;  // Move the left pointer to the right
            leftMax = max(leftMax, arr[left]);  // Update leftMax
            trappedWater += max(0, leftMax - arr[left]);  // Add trapped water if any
        } else {
            right--;  // Move the right pointer to the left
            rightMax = max(rightMax, arr[right]);  // Update rightMax
            trappedWater += max(0, rightMax - arr[right]);  // Add trapped water if any
        }
    }

    return trappedWater;
}

int main() {
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    cout << "Trapped water: " << trap(arr) << endl;
    return 0;
}
