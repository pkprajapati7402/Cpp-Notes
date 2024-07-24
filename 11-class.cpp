// Make a class of cars, having add two object ob1, ob2. having attributes as brand, year.

#include <iostream>
using namespace std;

class myClass{
    public:
    string brand;
    int year;

};

int main(){
    // Object 1 of myClass.
    myClass ob1;
    ob1.brand = "BMW";
    ob1.year = 2001;

    // Object 2 of myClass.
    myClass ob2;
    ob2.brand = "Audi";
    ob2.year = 2009;
    
    // Printing the object values.
    cout << "For Object 1 and 2" << endl;
    cout << "Brand: \t\t" << "Year: " << endl;
    cout << ob1.brand << "\t\t" << ob1.year << endl;
    cout << ob2.brand << "\t\t" << ob2.year << endl;


}