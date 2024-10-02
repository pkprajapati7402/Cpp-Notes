#include <iostream>
using namespace std;
int main(){
    int c = 10;
    // Address of C.
    cout << &c << endl;
    // Using ptr, to store the address of variable c.
    int* ptr = &c;
    cout << ptr << endl;

    // Another floating value pointer.
    float m = 12.98;
    float* ptr2 = &m;
    cout << ptr2 << endl;


    // Size of ptr depends on the ram of the device/system. like 4 byte, 8 , 16, etc.
    // Value stored at any pointer.
    char a = 'Y';
    char* ptr3 = &a;
    cout << "Address of a: " << *ptr3 << endl; // * in *ptr3 is called de-reference operator.
    cout << "Size of pointer ptr3." << sizeof(ptr3) <<  endl;
    
    return 0;
}