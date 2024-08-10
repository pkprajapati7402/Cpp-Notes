// 6: Find the third smallest element in an array of unique elements of size n. Whrer n > 3. without sorting.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[1000], n, sm = INT_MAX, secsm = INT_MAX, thrsm = INT_MAX;
    cout << "Enter number of elements: ";
    cin >> n;
    if(n < 3){
        cout << "-1";
        return 0;
    }
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // Finding smallest.
    for(int i = 0; i < n;i++){
        if(a[i] < sm){
            sm = a[i];
        }
    }
    // second smallest via comparing with smallest.
    for(int i = 0; i < n; i++){
        if(a[i] > sm && a[i] < secsm){
            secsm = a[i];
        }
    }
    // Third smallest via comparing with second smallest.
    for(int i = 0; i < n; i++){
        if(a[i] > secsm && a[i] < thrsm){
            thrsm = a[i];
        }
    }
    cout << "Third small: " << thrsm << endl;
    return 0;
}