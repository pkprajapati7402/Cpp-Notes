// Trailing zero
// for any number n = 4.
// Find factorial of n i.e. 4! = 4x3x2 = 24
// count the number of zeros at the end of the factorial. for exaple for n = 6! = 720, trailing zero is 1.

#include <iostream>
using namespace std;

class myclass{
    public:
        int fact(int n){
            if(n <= 1){
                return 1;
            } else{
                return n*fact(n-1);
            }
        }
        int zero(int n){
            int a = fact(n);
            int count = 0, rem;
            while(a != 0){
                rem = a % 10;
                if(rem == 0){
                    count++;
                } else{
                    break;
                }
                a /= 10;
            }
            return count;
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    myclass myobj;
    cout << "Trailing zero: " << myobj.zero(n) << endl;
    return 0;
}



// Logic 2: via finding the number of 5's in that number, at it leads to zero in the number.

class class2{
    public:
        int val(int n){
            int count = 0;
            while(n >= 5){
                count += n/5;
                n /= 5;
            }
            return count;
        }
};