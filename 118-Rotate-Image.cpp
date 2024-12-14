/*
48. Rotate Image
Medium
Topics
Companies
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 

Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000
*/

// Brutforce Approach.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m, n;
    cout << "Enter size of matrix: ";
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> ans(n, vector<int>(m));
    cout << "Enter elements of matrix: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    //Transpose.
    for(int i = 0; i < m-1; i++){
        for(int j = i+1; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << "Here's your transpose matrix: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Here's your Rotated Matrix: " << endl;
    for(int i = 0; i < m; i++){
        int start = 0, end = n - 1;
        while(start < end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}