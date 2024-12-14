//C++ program to add two matrices.

#include <iostream>
using namespace std;
#include <vector>

class Solution{
    private:
        vector<vector<int>> a;
        vector<vector<int>> b;
        int m,n,c;
    public:
        void input(){
            cout << "Enter rows and columns: ";
            cin >> m >> n;
            a.resize(m, vector<int>(n));
            b.resize(m, vector<int>(n));
            cout << "Enter Matrix 1 elements: ";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> a[i][j];
                }
            }
            
            cout << "Enter Matrix 2 elements: ";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> b[i][j];
                }
            } 
        }
        void add(){
            cout << "Here's your added Matrix: \n";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] + b[i][j] << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    Solution obj;
    obj.input();
    obj.add();
    return 0;
}