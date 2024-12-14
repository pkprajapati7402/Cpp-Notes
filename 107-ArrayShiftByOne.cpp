// C++ program to shift all the elements position of an array to the left, removing the first element.

#include <iostream>
using namespace std;

int main(){
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Shifting
    int t = arr[0];
    for(int i = 0; i < n; i++){
        arr[i] = arr[i + 1];
    }
    arr[n-1] = t;
    // Display.
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}