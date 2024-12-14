/*
C++ program to print the 2D array in  a wave form.
for example:
for a 4x4 matrix.
         0   1   2   3

0        1   2   3   4
1        5   6   7   8
2        9   1   2   3
3        4   5   6   7

Output: 1 5 9 4   5 1 6 2   3 7 2 6   7 3 8 4
*/

#include <iostream>
#include <vector>
using namespace std;

class sol{
    private:
        vector<vector<int>> arr;
        int m, n;
    public:
        void input(){
            cout << "Enter Row & Column: ";
            cin >> m >> n;
            arr.resize(m, vector<int>(n));
            cout << "Enter elements: \n";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> arr[i][j];
                }
            }

        }
        void waveMatrix(){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    // Print elements of even index.
                    for(int j = 0; j < m; j++){
                        cout << arr[j][i] << " ";
                    }
                    cout << "   ";
                } else{
                    // Print elements of odd index.
                    for(int j = m - 1; j >= 0; j--){
                        cout << arr[j][i] << " ";
                    }
                    cout << "   ";
                }
            }

        }
};
int main(){
    sol obj;
    obj.input();
    obj.waveMatrix();
    return 0;
}
   