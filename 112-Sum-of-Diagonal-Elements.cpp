// C++ program to print the sum of diagonal elements of a matrix;


#include <iostream>
#include <vector>
using namespace std;

class sol{
    private:
        vector<vector<int>> arr;
        int m, n, c;
    public:
        void input(){
            cout << "Enter size of Square Matrix: ";
            cin >> m >> n;
            arr.resize(m, vector<int>(n));
            cout << "Enter elements: \n";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> arr[i][j];
                }
            }
        }
        void sumdig(){
            // Sum of 1st diagonal.
            int sum = 0;
            int f = n - 1, l =  0;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(i == j){
                        sum += arr[i][j];
                    }
                }
                sum += arr[f][l];
                f--;
                l++;
            }
            if(m % 2 != 0){
                sum -= arr[m/2][n/2];
            }
            // Sum of 2nd Diagonal.
            cout << "The sum of Diagonals: " << sum << endl;
        }
};

int main(){
    sol obj;
    obj.input();
    obj.sumdig();
    return 0;
}