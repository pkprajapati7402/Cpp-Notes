// Multiple Inheritance
// A class can also be derived from more than one base class, using a comma-separated list:

// Example
// // Base class
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Another base class
// class MyOtherClass {
//   public:
//     void myOtherFunction() {
//       cout << "Some content in another class." ;
//     }
// };

// // Derived class
// class MyChildClass: public MyClass, public MyOtherClass {
// };

// int main() {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFunction();
//   return 0;
// }

#include <iostream>
using namespace std;

// Base class 1.
class myClass{
    public:
        void myFunc(){
            cout << "Hello my first base class.\n";
        }
};

// Base class 2.
class myAnotherClass{
    public:
        void myAnotherFunc(){
            cout << "This is myAnotherClass.";
        }
};

// calling all the base classes in a single derived class.
class grandClass: public myClass, public myAnotherClass{

};

int main(){
    grandClass myObj;
    myObj.myFunc();
    myObj.myAnotherFunc();
    return 0;
}








// =========================================================================================================================================
/*
Access Specifiers
You learned from the Access Specifiers chapter that there are three specifiers available in C++. Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:

Example
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

*/