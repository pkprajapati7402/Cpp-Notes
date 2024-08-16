// C++ program to reverse the postion of array of numbers. also display the numberse after reversing.

// Method 1: Using another array.
#include <iostream>
using namespace std;
int main(){
    int a[1000], n, b[1000];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    //Reversing the array.
    for(int i = 0; i < n; i++){
        b[n - i - 1] = a[i];
    }
    // Printing the reversed array.
    for(int i = 0; i <n; i++){
        cout << b[i] << " ";
    }
    return 0;
}

// Method 2: using temporary variable to interchange the respective values.
#include <iostream>
using namespace std;

int main(){
    int a[1000], n, temp = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    // Reversing the array.
    int i = n - 1, j = 0;
    while(i > j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j++;
        i--;
    }
    
    for(int k = 0; k < n; k++){
        cout << a[k] << " ";
    }
    return 0;
}


// Method 3: Using inbuilt function.
#include <iostream>
using namespace std;

int main(){
    int a[1000], n, temp = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    // Reversing the array.
    int i = n - 1, j = 0;
    while(i > j){
        swap(a[i], a[j]);
        j++;
        i--;
    }
    
    for(int k = 0; k < n; k++){
        cout << a[k] << " ";
    }
    return 0;
}
