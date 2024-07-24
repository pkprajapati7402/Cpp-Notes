// Medium Level Pattern Printing.
/*
Pattern 1. Right Triangle.

*
* *
* * *
* * * *
* * * * *

Pattern 2. Number Triangle.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Pattern 3. Ordered Number Triangle.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Pattern 4. Reverse Number Triangle of Pattern 2.
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

Pattern 5. Alphabetical Pattern.
a
b b
c c c
d d d d
e e e e e

Pattern 6. Reverse Right Triangle.
* * * * *
* * * *
* * *
* *
*

Pattern 7. Number Reverse Triangle.
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Pattern 8. Reverse Reverse Number Pattern.
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include <iostream>
using namespace std;
class class1{
    public:
        void rightriangle(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= i; j++){
                    cout << "* ";
                }
                cout << endl;
            }
        }
        void numtriangle(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= i; j++){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        void odnumtriangle(int n){
            for(int  i = 1; i <= n; i++){
                for(int j= 1; j <= i; j++){
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        void revnumtriangle(int n){
            for(int i = 1; i <= n; i++){
                for(int j = i; j >= 1; j--){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        void alphatriangle(int n){
            char a = 'a';
            for(int i = 1; i <= n; i++){
                //Optional method.
                //char a = 'a' + (i - 1);
                for(int j = 1; j <= i; j++){
                    printf("%c ", a);
                }
                a++;
                cout << endl;
            }
        }
        void revpattern(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n - i + 1; j++){
                    cout << "* ";
                }
                cout << endl;
            }
        }
        void numrevtri(int n){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n - i + 1; j++){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        void revrevnumpatt(int n){
            for(int i = 1; i<= n; i++){
                for(int j = n; j >= n - i + 1; j--){
                    cout << j << " ";
                }
                cout << endl;
            }
        }

};
int main(){
    int n;
    class1 myobj;
    cout << "Enter N: ";
    cin >> n;
    cout << "1. Right Angle Triangle\n";
    cout << "2. Number Triangle\n";
    cout << "3. Ordered Number Triagle\n";
    cout << "4. Reverse Number Triangle of 2\n";
    cout << "5. Alphabetical Triangle\n";
    cout << "6. Reverse Right Triangle.\n";
    cout << "7. Reverse Number Triangle.\n";
    cout << "8. Rev Rev Number Pattern.\n";
    cout << "Choose any one of these: ";
    int opt;
    cin >> opt;
    cout << endl;
    switch(opt){
        case 1: myobj.rightriangle(n); break;
        case 2: myobj.numtriangle(n); break;
        case 3: myobj.odnumtriangle(n); break;
        case 4: myobj.revnumtriangle(n); break;
        case 5: myobj.alphatriangle(n); break;
        case 6: myobj.revpattern(n); break;
        case 7: myobj.numrevtri(n); break;
        case 8: myobj.revrevnumpatt(n); break;

        default: cout << "Not Valid!"; break;
    }
}