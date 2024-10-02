#include <iostream>
using namespace std;
int main(){
    int a = 88;
    int* ptr = &a;
    cout << "Address of a: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl;

    // Inserting second variable in the same pointer.
    int b = 20;
    ptr = &b;
    cout << "Address of b: " << ptr << endl;
    cout << "Value of b: " << *ptr << endl;

    // updatig the value of b;
    b = 30;
    cout << "new value of b: " << *ptr << endl;         

    return 0;
}