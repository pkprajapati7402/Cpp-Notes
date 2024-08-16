// C++ program to find the missing number between 0 and N, of the array.
#include <iostream>
using namespace std;
int main(){
    int a[1000], n, series = 0, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // finding the missing number.
    for(int i = 0; i < n; i++){
        series += i;
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            sum += a[i];
        }
    }
    cout << "Ans: " << series - sum << endl;
    return 0;
}