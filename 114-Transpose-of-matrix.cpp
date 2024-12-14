// C++ program to find the transpose of matrix.

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
       
        vector<vector<int>> transposed(cols, vector<int>(rows));
        
       
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }
        
        return transposed;
    }
};
