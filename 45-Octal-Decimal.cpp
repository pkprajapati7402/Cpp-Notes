// C++ program to convert octal number into decimal number.
// Decimal {0, 1, 2, 3, 4, 5, 6, 7}
// Octal {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}


#include <iostream>
#include <cmath>
using namespace std;
class OctalDecimal
{

public:
    int ocd(int n){
        int dec = 0, rem = 0, p = 0;
        while(n!= 0){
            rem = n % 10;
            dec += rem*pow(8,p);
            p++;
            n/=10;
        }
        return dec;
    }
};

int main(){
    int n;
    cout << "Enter Octal Number: ";
    cin >> n;
    OctalDecimal myobj;
    cout << "Decimal Number: " << myobj.ocd(n) << endl;
    return 0;
}
