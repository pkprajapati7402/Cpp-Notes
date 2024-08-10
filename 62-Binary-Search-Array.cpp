// Write a C++ program to take input the array of numbers and search and element asked by the user, write it's index.

#include <iostream>
using namespace std;
int main(){
    int a[1000], n, val, index = -1;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << "Enter value to search: ";
    cin >> val;
    for(int i = 0; i< n; i++){
        if(a[i] == val){
            index = i;
            break;
        }
    }
    if(index >= 0){
        cout << "Element " << val << "found at index " << index << endl;
    } else{
        cout << "Not found!" << endl;
    }
    return 0;
}