// C++ program to find the sum of digits of a number.
#include <iostream>
using namespace std;
int main(){
    int n, total = 0;
    cout << "Enter n: ";
    cin >> n;
    while(n != 0){
        int digit = n % 10;
        total += digit;
        n /= 10;
    }
    cout << "Sum of digits: " << total << endl;
    return 0;
}