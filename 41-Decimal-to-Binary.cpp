/*
C++ program to convert Decimal number into Binary number.
Decimal: 0 1 2 3 4 5 6 7 8 9
Binary: 0 1
*/

#include <iostream>
using namespace std;
class class1{
    public:
        int binary(int n){
           int bin = 0;
           int place = 1;
           if(n == 0){
            return 0;
           }
           while(n != 0){
            int rem = n % 2;
            bin += (rem * place);
            place *= 10;
            n /= 2;
           } 
           return bin;
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    class1 myobj;
    int val = myobj.binary(n);
    cout << "Binary: " << val << endl;
    return 0;
}