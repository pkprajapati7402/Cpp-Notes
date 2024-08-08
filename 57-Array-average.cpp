// 2: Calculate the average of elements in an array of size 18.
#include <iostream>
using namespace std;

int main(){
    int a[18], n, sum  = 0;
    cout << "Enter elements: ";
    for(int i = 0; i < 18; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << "Average of these 18 elements: " << sum / 18 << endl; return 0;
}