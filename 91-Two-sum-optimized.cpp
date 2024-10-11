/*
(leetcode)
197 Two sum II - Input Array is sorted.

there's a list of numbers in sorted form arr: 2, 7, 11, 15, 27. and a target value = 22. you need to find two numbers in the array which adds up to give target value.
*/

#include <iostream>
using namespace std;

class twosum{
    private: 
        int a[100], n, target;
    public: 
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            cout << "Enter your target value: ";
            cin >> target;
        }
        void brutforce(){
            // This method has a time complexity of O(n2);
            for(int i = 0; i < n; i++){
                for(int j = 1 + i; j < n; j++){
                    if(a[i] + a[j] == target){
                        cout << "Two numbers are " << a[i] << " & " << a[j] << endl;
                        break;
                    }
                }
            }
        }
        void optimized(){
            // This method has time complexity of O(nlog(n)), due to binary search and single traversing.
            for(int i = 0; i < n; i++){
                int f = i + 1; 
                int l = n - 1;
                int x = target - a[i];
                int mid;
                // binary search to check remaining integer.
                while(f <= l){
                    mid = f + (l - f) / 2;
                    if(a[mid] == x){
                        cout << "Values are " << a[i] << " & " << a[mid] << endl;
                        break;
                    } else if(a[mid] < x){
                        f = mid + 1;
                    } else{
                        l = mid - 1;
                    }
                }
            }            
        }
        vod optimizedtwosum(){
            // This method uses two pointers to find the summation value of target.
            int start = 0, end = n - 1;
            while(start < end){
                if(a[start] + a[end] == target){
                    cout << "The values are : " << a[start] << " & " << a[end] << endl;
                    break;
                } else if((a[start] + a[end]) > target){
                    end--;
                } else[
                    start++;
                ]
            }
        }
};
int main(){
    twosum obj;
    obj.input();
    cout << "\nBrutforce\n";
    obj.brutforce();
    cout << "\nOptimized\n";
    obj.optimized();
    cout << "\nTwo Pointer optimized\n";
    obj.optimizedtwosum();
    return 0;
}