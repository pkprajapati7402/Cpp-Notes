/*
Write a C++ program to print all the sub-arrays possible for a given array.
*/
#include <iostream>
#include <vector>
using namespace std;

class sol{
private:
    vector<int> arr;
    int c, n;

public:
    void input(){
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            arr.push_back(c);
        }
    }
    void subarray(){
        cout << "The possible sub-array's are: \n";
        for (int length = 1; length <= n; length++){
            for (int i = 0; i < n - length; j++){
                for (int k = i; k < i + length; k++){
                    cout << arr[k];
                    if (k < i + length - 1){
                        cout << " ";
                    }
                }
                if (i < n - length){
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
};
int main(){
    sol obj;
    obj.input();
    obj.subarray();
    return 0;
}
