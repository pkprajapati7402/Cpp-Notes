/*
THREE SUM

Similar to 2 sum problem,
Now in an array you have to find three numbers whose sum equals target value.
you need to answer True if numbers exist else false.
*/


class Solution {
public:
    bool threeSum(vector<int>& arr, int k) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n - 2; i++) {
            int dif = k - arr[i];
            int start = i + 1, end = n - 1;
            
            while (start < end) {
                if (arr[start] + arr[end] == dif) {
                    return true;  
                } else if (arr[start] + arr[end] < dif) {
                    start++;  
                } else {
                    end--;  
                }
            }
        }
        return false; 
    }
};
