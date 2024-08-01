// C++ program to convert lowercase letter into uppercase letter.

#include <iostream>
using namespace std;
class myclass{
    public:
        char upper(char a){
            return (a - 32);
        }
};
int main(){
    char a;
    cout << "Enter Character: ";
    cin >> a;
    myclass myobj;
    cout << "Uppercase: " << myobj.upper(a) << endl;
    return 0;
}