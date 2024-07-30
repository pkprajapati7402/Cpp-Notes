// Multilevel Inheritance
// A class can also be derived from one class, which is already derived from another class.

// In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).

// Example
// // Base class (parent)
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Derived class (child)
// class MyChild: public MyClass {
// };

// // Derived class (grandchild)
// class MyGrandChild: public MyChild {
// };

// int main() {
//   MyGrandChild myObj;
//   myObj.myFunction();
//   return 0;
// }

#include <iostream>
using namespace std;

// Base class(parent);
class Parent{
    public:
    void myFunc(){
        cout << "Printing from the parent public element.";
    }
};

// Child Class <- taking public values from the parent class.
class child: public Parent{

};

// Grandchild class <<--- taking all the value of public child class.
class grandChild: public child{

};

int main(){
    grandChild myObj;
    myObj.myFunc();
    return 0;
}