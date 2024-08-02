// Armstrong number is a number for example input: 23
// there are two digits i.e. 2 and 3.
// sum the numbers as the power sum = 2^2 + 3^2
// If sum==input number: it's armstrong number, else not.

#include <iostream>
#include <cmath>
using namespace std;
class myclass{
    public:
        bool armstrong(int n){
            int count = 0, temp = n, sum = 0, temp2 = n;
            while(temp != 0){
                count++;
                temp /= 10;
            }
            while(temp2 != 0){
                int dig = temp2 % 10;
                sum += pow(dig,count);
                temp2 /= 10;
            }
            if(sum == n){
                return 1;
            } else {
                return 0;
            }
        }
};

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    myclass myobj;
    (myobj.armstrong(n))? cout << "It's armstrong number. \n": cout << "No it's not\n"; 
    return 0;
}