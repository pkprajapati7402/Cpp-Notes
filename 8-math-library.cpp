
// C++ Math
// C++ has many functions that allows you to perform mathematical tasks on numbers.

// Max and min
// The max(x,y) function can be used to find the highest value of x and y:

// Example
// cout << max(5, 10);
// And the min(x,y) function can be used to find the lowest value of x and y:

// Example
// cout << min(5, 10);
// C++ <cmath> Library
// Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:

// Example
// // Include the cmath library
// #include <cmath>

// cout << sqrt(64);
// cout << round(2.6);
// cout << log(2);

/*
Other <cmath> functions
sqrt(square root)
roud(rounds a number)
log(natural logarithm)
sin
cos
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Square root of 64 is: " << sqrt(64) << "\n";
  cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
  cout << "The natural logarithm of 2 is: " <<log(2) << "\n";
  return 0;
}
