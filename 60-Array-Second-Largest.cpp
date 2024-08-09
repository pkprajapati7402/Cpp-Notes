// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[1000], n, max = INT_MIN, secmax = 0, k[1000];
    cout << "Enter the size of the array: ";
    cin >> n;
 
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n < 3){
        (a[0] < a[1])? cout << "second large: " << a[0]: cout << "second large: " << a[1];
        return 0;
    }
    // Algorithm for largest and second larghest elements without sorting.
    // Largest.
    for(int i = 0; i < n; i++){
        if(a[i] > max){
           max = a[i];
        }
    }
    // Second largest via comparing to largest.
    for(int i = 0; i < n; i++){
        if(a[i] < max && secmax < a[i]){
            secmax = a[i];
        }
    }
    cout << "Second Max: " << secmax<< endl;
    return 0;

}