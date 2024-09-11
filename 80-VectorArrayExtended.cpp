#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        a.puch_back(a[i]);
    }
    // printing first element of the array. thre are two methods.
    cout << a.[0] << endl;
    cout << a.front() << endl;
    // Printing last element of the array.
    cout << a.[a.size() - 1] << endl;
    cout << a.back() << endl; 


    // Copying elements of one array to another array.
    vector<int> arr;
    arr = a;

    // Automatically printing the value method 2;
    for(auto i: arr){
        cout << i << " ";
    }


    // Sorting vector array using built in function.
    // Sort in increasing order.

    arr.sort(arr.begin(),arr.end());
    
    // Sorting array in decreasing order.
    arr.sort(arr.begin(),arr.end(), greater<int>());
    sort(arr.rbegin(),arr.rend());

    // Searching in Binary Search.
    cout << binary_search(arr.begin(),ans.end(), 54); // 54 is the element to be searched in.

    // Finding the index value of the target value.
    cout << find(arr.begin(), arr.end(), 54) - ans.begin();

    // Lower_bound.
    // int l = lower_bound(first_iterator,last_iterator,x);
    // int f = upper_bound(first_iterator,last_iterator,x);

    
    return 0;
}