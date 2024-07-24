/*
Both for Loop and While loop can be used interchangibly.
mostly: while loop is used when the varible needs to be changed in the further program.
and for loop is used for simple conditions.
*/

//Program 1: Table using while loop
#include <iostream>
using namespace std;
class class1{
    public:
        void tab(int n){
            int i = 1;
            while(i <= n){
                cout << i << " X " << n << " = " << i * n << endl;
                i++;
            }
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    class1 myobj;
    myobj.tab(n);
    return 0;
}

// Program 2: Odd Even between 1 to n.
#include <iostream>
using namespace std;
class class2{
    public:
        void values(int n){
            int i = 1;
            cout << "Evens: ";
            while(i <= n){
                if(i % 2 == 0){
                    cout << i << ", ";
                }
                i++;
            }
            cout << endl;
            int j = 1;
            cout << "Odds: ";
            while(j <= n){
                if(j % 2 != 0){
                    cout << j << ", ";
                }
                j++;
            }
            cout << endl;
        }
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    class2 myobj;
    myobj.values(n);
    return 0;
}

 