// Vector is used to declare an array etc. with dynamic memory allocation system. when new element is added to it, it's size gets doubled when full.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Vector create/declare.
    vector<int> v;
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    // Feeding element from back.
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    // Updating value.
    v[1] = 5;
    
    return 0;
}