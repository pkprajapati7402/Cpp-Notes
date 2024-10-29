/*
Kadane's algorithm says that while dividing array into two sub-array for max-sum, we ignore negative prefix to zero and then we calculate the prefix.

for example: array 2, 7, -4, 3, -10, 7, 8
prefix array is:   2, 9, 5, 8, -2[considerd 0], 7, 15

In this way we calculate the max sum sub-array.
*/

/*
Kadane's algorithm says that while dividing array into two sub-array for max-sum, we ignore negative prefix to zero and then we calculate the prefix.

for example: array 2, 7, -4, 3, -10, 7, 8
prefix array is:   2, 9, 5, 8, -2[considerd 0], 7, 15

In this way we calculate the max sum sub-array.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class sol{
    private:
        vector<int> arr;
        int n, c;
    public:
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            if(n <= 0){
                cout << "Invalid no element present!";
            }else{
                cout << "Enter elements: ";
                for(int i = 0; i < n; i++){
                    cin >> c;
                    arr.push_back(c);
                }
            }
            
        }
        void largesum(){
            int prefix = 0;
            int max = INT_MIN;
            for(int i = 0; i < n; i++){
                prefix += arr[i];
                if(prefix > max){
                    max = prefix;
                }
                if(prefix < 0){
                    prefix = 0;
                }
            }
            if(max == INT_MIN){
                cout << " ";
            } else{
                cout << "Largest sum is: " << max << endl;
            }
        }
};
int main(){
    sol obj;
    obj.input();
    obj.largesum();

    return 0;
}