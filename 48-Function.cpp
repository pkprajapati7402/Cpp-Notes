// Functions using pass by value and pass by reference.
// Pass by Value: when we pass a value to a function, if it's void it won't change the state of the passed variable.
// Pass by Reference: When we pass the reference value of the variables, this leads to point the object/varible and subsequently changing the state of the varialble.


#include <iostream>
using namespace std;

void PassByValue(int a, int b){
    int c;
    c = a; 
    a = b;
    b = c;
}

void PassByRefer(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Pass by value result: ";
    PassByValue(a,b);
    cout << a << " " << b << endl;
    cout << "Pass by Reference: ";
    PassByRefer(a,b);
    cout << a << " " << b << endl;
    return 0;
}