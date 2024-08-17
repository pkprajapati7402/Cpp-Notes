#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
// Method 1:

class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k % n; // To handle cases where k > n
        
        // Rotate k times
        for(int i = 0; i < k; i++) {
            // Store the last element
            int last = a[n - 1];
            // Shift all elements to the right by one position
            for(int j = n - 1; j > 0; j--) {
                a[j] = a[j - 1];
            }
            // Place the last element at the first position
            a[0] = last;
        }
    }
};
