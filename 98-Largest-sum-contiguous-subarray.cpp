/*
An array  is given to you as:
Array: 3, 4, -5, 8, -12, 7, 6, -2
ans: [7,6] = 13 is the largest sum subarray.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int n, c;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> c;
        arr.push_back(c);
    }
    arr.resize(arr[n]);
    // Subarrays.
    int length = n;
    cout << "The sub-array's are: \n";
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n - i; j++){
            for(int k = j; k < j + i; k++){
                cout << arr[k] << " ";
            }
            if(j < n - i){
                cout << ", ";
            }
        }
        cout << endl;
    }
    return 0;
}