// C++ program to show difference between
// definition and declaration of a 
// variable
#include <iostream>
using namespace std;

int main()
{
	// this is declaration of variable a
	int a;

	// this is initialisation of a
	a = 10;

	// this is definition = declaration + initialisation
	int b = 20;

	// declaration and definition
	// of variable 'a123'
	char a123 = 'a';

	// This is also both declaration and definition
	// as 'c' is allocated memory and
	// assigned some garbage value.
	float c;

	// multiple declarations and definitions
	int _c, _d45, e;

	// Let us print a variable
	cout << a123 << endl;

	return 0;
}
