// Declering a vector array.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Here in v1{5,1}: 5 is the size and 1 has been set to initial value of the array v1.
    vector<int> v1{5,1};
    cout << "Size of v1: " << v1.size() << endl;
    cout  << "Capacity of v1: " << v1.capacity() << endl;
    // Adding 6th element to it.
    v1.puch_back(6);
    cout << "Size of v1: " << v1.size() << endl;
    cout  << "Capacity of v1: " << v1.capacity() << endl;

    // Another way to initialize a vector for array.
    vector<int> v3 = {1,2,3,4,5};
    cout << "Size of v3: " << v3.size() << endl;
    
    // Deleting a value from the vector.
    vector<int> a;
    a.push_back(11);
    a.push_back(20);
    a.push_back(71);
    a.push_back(84);
    a.push_back(15);
    cout << "Before Size of a: " << a.size() << endl;
    cout  << "Before Capacity of a: " << a.capacity() << endl;
    // Pop_back() is used to remove element from the back.
    a.pop_back();
    cout << "Size of a: " << a.size() << endl;
    cout  << "Capacity of a: " << a.capacity() << endl;

    /// Removing an element from the mid or any index value.
    /// a.erase(a.begin() + index_value_to_be_removed);
    a.erase(a.begin() + 1);

    // DIsplaying all the elements of the array.
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    // Inserting a particular value of array to a definite place.
    // a.insert(a.begin() + 1,50); Here 1 is the place where we have to add the value, 50 is the value to be added.
    a.insert(a.begin() + 1,50);
    cout << endl;
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    // Clearing all the value of the array.
    // .clear() is used to clear the values of the array.
    a.clear();
    
    return 0;
}