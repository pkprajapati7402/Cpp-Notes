// C++ program to print the fibonacci series.
#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c, i, n;
    cout << "Enter the number of terms of fibonacci series: ";
    cin >> n;
    cout << "Fibonacci series: 0 1 ";
    for(i = 0; i <n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}