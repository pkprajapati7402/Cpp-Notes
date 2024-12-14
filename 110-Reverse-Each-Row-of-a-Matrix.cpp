// C++ program to reverse Each row of a Matrix.

#include <iostream>
#include <vector>
using namespace std;

class Solution{
  private:
    vector<vector<int>> arr;
    int m, n;
  public:
    void input(){
      cout << "Enter Row & Column: ";
      cin >> m >> n;
      arr.resize(m, vector<int>(n));
      cout << "Enter elements: ";
      for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
          cin >> arr[i][j];
        }
      }
    }
    void reverse(){
      for(int i = 0; i < m; i++){
        int k = n - 1;
        for(int j = 0; j < n/2; j++){
          swap(arr[i],arr[k]);
          k--;
        }
      }
      
      // Displaying the matrix.
      for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
          cout << arr[i][j] << " ";
        }
        cout << endl;
      }
    }
};
int main(){
  Solution obj;
  obj.input();
  obj.reverse();
  return 0;
}