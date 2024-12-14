/*
Transpose of a Square matrix, without using the extraspace.

*/

// Brutforce Approach for all .
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
    //Transpose
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            ans[j][i] = arr[i][j];
        }
    }
    cout << "Here's your transpose matrix: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// Optimized approach for Square matrix.




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
    //Transpose
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
    return 0;
}