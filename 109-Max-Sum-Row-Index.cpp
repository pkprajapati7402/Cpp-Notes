// C++ program to find the row index with maximum sum.

#include <iostream>
using namespace std;
#include <vector>

class Solution{
    private:
        vector<vector<int>> arr;
        int m,n;
    public:
        void input(){
            cout << "Enter Row & Colums: ";
            cin >> m >> n;
            arr.resize(m, vector<int>(n));
            cout << "Enter elements: \n";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> arr[i][j];
                }
            }
        }
        void maxsum(){
            int temp = 0, max;
            for(int i = 0; i < m; i++){
                int sum = 0;
                for(int j = 0; j < n; j++){
                    sum += arr[i][j];
                }
                if(sum > temp){
                    max = i;
                    temp = sum;
                }
            }
            cout << "The maximum Row Index is " << max << endl;
        }
};
int main(){
    Solution obj;
    obj.input();
    obj.maxsum();
    return 0;
}