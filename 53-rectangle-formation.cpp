// Given input four sides a, b, c, d.
// now check is there any possibility, that the rectangle can be made using these dimnesions.

#include <iostream>
using namespace std;

class myclass{
    public:
        bool rect(int a, int b, int c, int d){
            if((a == b && c == d) || (a == c && b==d) || (a==d && b == c)){
                return 1;
            } else {
                return 0;
            }
        }
};
int main(){
    int a, b, c, d;
    cout << "Enter a, b, c, d: ";
    cin >> a >> b >> c >> d;

    myclass myobj;
    (myobj.rect(a, b, c,d))? cout << "Yes\n": cout << "No\n";
    return 0;
}