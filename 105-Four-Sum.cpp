/*
C++ program to find four elements that sum to a given value.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
   
    public:
        bool fourSum(vector<int> arr, int target){
            int n = arr.size();
            sort(arr.begin(), arr.end());
            for(int i = 0; i < n - 3; i++){
                for(int j = i + 1; j < n - 2; j++){
                    int dif = target - arr[i] - arr[j];
                    int start = j + 1, end = n - 1; 
                    while(start < end){
                        if(arr[start] + arr[end] == dif){
                            return true;
                        } else if(arr[start] + arr[end] < dif){
                            start++;
                        } else{
                            end--;
                        }
                    }
                }
            }
            return false;
        }
};

int main(){
    Solution obj;
    int n, t, c;
    cout << "Enter number of elements: "; 
    cin >> n;
    vector<int> arr;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> c;
        arr.push_back(c);
    }
    cout << "Enter target value: ";
    cin >> t;
    if(obj.fourSum(arr,t)){
        cout << "Yes";
    } else{
        cout << "No";
    }
}