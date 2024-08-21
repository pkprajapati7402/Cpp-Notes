// Buble sort is a technique of sorting elements in an array in which, we compare two continuous elements for a larger value. If it is greater then preceeding then it is kept on the left.

// Optimized Algorithm.=====================================
#include <iostream>
using namespace std;

class myclass{
    public:
        void sort(int arr[], int n){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(arr[i] > arr[j]){
                        swap(arr[i], arr[j]);
                    }
                }
            }
        }
};

int main(){
    int n;
    int arr[1000];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After sorting elements: ";
    myclass myobj;
    myobj.sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}


// My Algorithm.=========================================
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

class myclass{
    public:
        // ios_base::sync_with_stdio(false);
        int sort(int arr[], int n){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(arr[i] > arr[i + 1]){
                        swap(arr[i],arr[i+1]);
                    }
                }
                
            }
            return arr[n];
        }
};
int main(){
    int n;
    int arr[1000];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After sorting elements: ";
    myclass myobj;
    myobj.sort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}


// Method 3:
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                // swap(arr[j],arr[j+1])
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
