// 1: Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;
int main(){
    int a[100], n, ans = 0;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ans += a[i];
    }
    cout << "Ans: " << ans << endl;
    return 0;
}