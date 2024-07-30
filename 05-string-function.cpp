/*
The at() function
The <string> library also has an at() function that can be used to access characters in a string:

Example
string myString = "Hello";
cout << myString; // Outputs Hello

cout << myString.at(0);  // First character
cout << myString.at(1);  // Second character
cout << myString.at(myString.length() - 1);  // Last character

myString.at(0) = 'J';
cout << myString;  // Outputs Jello

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << "Original string: " << myString << "\n";
  
  cout << "First character: " << myString.at(0) << "\n";
  cout << "Second character: " << myString.at(1) << "\n";
  cout << "Last character: " << myString.at(myString.length() - 1) << "\n";
  
  myString.at(0) = 'J';
  cout << "Changed string: " << myString;
  return 0;
}
