/*
Just like Rotate Matrix by 90, here also. we have to rotate the rotated matrix by 90 degrees.
Method 1: Brutforce approach. Rotate the Matrix by 90(transpose -> swapping), twice.
Method 2: Direct Approach, First swap all row elements, then swap all column elements.
(swap each row element from back) -> (Swap each column element from top to down).
*/

// Method 1: 
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
    // Rotating by 180.
    for(int i = 0; i < m-1; i++){
        for(int j = i+1; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
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



// Method 2.

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
    //Row elements Swapping.
    for(int i = 0; i < n; i++){
        int start = 0, end = m - 1;
        while(start < end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    // Printing.
    cout << "here's your row swapping elements: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }
    // Column elements Swapping.
    for(int i = 0; i < m; i++){
        int start = 0, end = n - 1;
        while(start < end){
            swap(arr[start][i], arr[end][i]);
            start++;
            end--;
        }
    }
    // Display.
    cout << "Here's your matrix: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}