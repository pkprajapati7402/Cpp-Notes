// C++ Program to convert Binary number into decimal.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, rem = 0, p = 0, total = 0;
    cout << "Enter Binary Number: ";
    cin >> n;
    while(n != 0){
        rem = n % 10;
        total += (rem * pow(2,p));
        p++;
        n /= 10;
    }
    cout << "Decimal Number: " << total << endl;
    return 0;
}