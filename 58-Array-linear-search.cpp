// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include <iostream>
using namespace std;
int main(){
    int a[1000], n, num;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> num;
    for(int i = 0; i < n; i++){
        if(a[i] == num){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}

