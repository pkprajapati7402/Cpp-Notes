// String Length
// To get the length of a string, use the length() function:

// Example
// string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// cout << "The length of the txt string is: " << txt.length();
// Tip: You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():

// Example
// string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// cout << "The length of the txt string is: " << txt.size();

#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt = "ABCDEFGHIJKLMNOP";
    cout << "Lenght : " << txt.size();
    cout << "Lenghth: " << txt.length();
    return 0;
}