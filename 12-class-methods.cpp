// Class Methods
// Methods are functions that belongs to the class.

// There are two ways to define functions that belongs to a class:

// Inside class definition
// Outside class definition
// In the following example, we define a function inside the class, and we name it "myMethod".

// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

#include <iostream>
using namespace std;

class myClass{
    public:
    int hello(int a);
};
int myClass::hello(int a){
    return a;
}
int main(){
    myClass myobj;
    cout << myobj.hello(200);
    return 0;
}