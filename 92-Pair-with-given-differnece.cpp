/*
an array is given to you 5, 10, 3, 2, 50, 80. and you need to find two numbers whose diffence is 45.
x - y = 45
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class solution{
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
            cout << "Enter target value: ";
            cin >> target;
        }
        int brutforce(){
            //Method1 directly finding the diffence value with complexit O(n^2).
            cout << "\nBrutforce approach\n";
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(abs(a[i] - a[j]) == target){
                        cout << "Two numbers are " << a[i] << " & " << a[j] << endl;
                        return 0;
                    }
                }
            }
            return 0;
        }
        int TwosumPointer(){
            // We need to sort the array first.
            sort(a,a+n);
            //using two pointer to find the values.
            cout << "\nTwo pointer approach\n";
            int start = 0, end = start + 1;
            while(start < n){
                if(abs(a[start] - a[end]) == target){
                    cout << "Two numbers are " << a[start] << " & " << a[end] << endl;
                    return 0;
                } else if(abs(a[start] - a[end]) < target){
                    end++;
                } else{
                    start++;
                }
            }
            return 0;
        }
};
int main(){
    solution obj;
    obj.input();
    // obj.brutforce();
    obj.Twosum();

    return 0;
}

