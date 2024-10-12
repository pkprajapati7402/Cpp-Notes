/*
An array is given to you:
arr: 3, 4, -2, 5, 8, 20, -10, 8
sub-array1: 3, 4, -2, 5, 8
sub-array2: 20, -10, 8
*/

#include <iostream>
#include <vector>
using namespace std;

class sol{
    private:
        int n, c;
    public:
        vector<int> arr;
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for(int i = 0; i < n; i++){
                cin >> c;
                arr.push_back(c);
            }
        }
        // Brute-force approach.
        bool EqualSubArray(){
            int b = 1;
            while(b < n){
                int sum1 = 0, sum2 = 0;  
                // first sub-array sum.
                for(int i = 0; i < b; i++){
                    sum1 += arr[i];
                }
                // second sub-array sum.
                for(int i = b; i < n; i++){
                    sum2 += arr[i];
                }
                // condition to check if equal.
                if(sum1 == sum2){
                    cout << "Yes\n";
                    return true;
                }
                b++;
            }
            cout << "No\n";
            return false;
        }
        bool optimized(){
            long int sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
            int pref[n];
            pref[0] = arr[0];
            for(int i = 1; i < n; i++){
                pref[i] = pref[i - 1] + arr[i];
                int rem = sum - pref[i];
                if(rem == pref[i]){
                    
                    return 1;
                }
            }
            return 0;
        }
};

int main(){
    sol obj;
    obj.input();
    // bool found = obj.EqualSubArray();  
    bool found = obj.optimized();  

    if(found){
        cout << "Yes, equal sub-arrays found!\n";
    } else {
        cout << "No equal sub-arrays found.\n";
    }
    return 0;
}
