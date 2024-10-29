/*
42. Trapping Rain Water
Hard
Topics
Companies
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105

*/

/*
============================================================================================================
Approach:
    make two array, left high, and right high. 
    for each block: the number of units it can store water
    n = minimum of (leftHight, rightHigh).
    if(n is smaller than that block height){
    "cannot store water"
    }
    else{
    water it can store = n - that block height
    }

while solving, we can make two array's left high and right high for each element. and solve.
============================================================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 1) return 0;  // Early return if not enough heights to trap water.

        // Initialize leftHeight and rightHeight arrays with size `n`
        vector<int> leftHeight(n, 0);
        vector<int> rightHeight(n, 0);
        int count = 0;

        // Compute left max heights
        leftHeight[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftHeight[i] = max(leftHeight[i-1], height[i]);
        }

        // Compute right max heights
        rightHeight[n-1] = height[n-1];
        for (int i = n - 2; i >= 0; i--) {
            rightHeight[i] = max(rightHeight[i+1], height[i]);
        }

        // Calculate trapped water
        for (int i = 0; i < n; i++) {
            int minval = min(leftHeight[i], rightHeight[i]);
            if (minval > height[i]) {
                count += minval - height[i];
            }
        }

        return count;
    }
};
