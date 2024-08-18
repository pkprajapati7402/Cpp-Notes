// C++ program to pass an array into a function and print the values of the function.
#include <iostream>
using namespace std;

void func(int a[], int n){
    for(int i = 0; i< n; i++){
        cout << a[i] << " ";
    }
    
}
int main(){
    int a[10000], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    func(a,n);
    return 0;
}