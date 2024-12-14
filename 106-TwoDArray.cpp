/*
C++ program to find an element in a 2d array.
*/

#include <iostream>
using namespace std;

class Solution(){
    private:
        int n, m, c;
        vector<vector<int>> arr;
    public:
        void input(){
            cout << "Enter rows and columns: ";
            cin >> m >> n;
            cout << "Enter elements: ";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> c;
                    arr.push_back(c);
                }
            }
        }
        bool search(int p){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(arr[i][j] == p){
                        return 1;
                    }
                }
            }
            return 0;
        }
};
int main(){
    Solution obj;
    obj.input();
    int p;
    cout << "Enter element to search: ";
    cin >> p;
    (obj.search(p))? cout << "Found": cout << "Not Found";

    return 0;
}