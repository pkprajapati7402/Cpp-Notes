// C++ program to convert Decimal to Octal number.
// Decimal {0, 1, 2, 3, 4, 5, 6, 7}
// Octal {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
// The Base of Octal is 8, divide the Decimal number by 8 and get remainders in reverse order.

#include <iostream>
using namespace std;
class class1{
    public:
        int deco(int n){
            int octal = 0, place = 1;
            while(n != 0){
                int rem = n % 8;
                octal += rem * place;
                place *= 10;
                n /= 8;
            }
            return octal;
        }
};
int main(){
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    class1 myobj;
    cout << "Octal Number: " << myobj.deco(n) << endl;
    return 0;
}



