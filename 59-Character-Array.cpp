// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include <iostream>
using namespace std;
int main(){
    char a[100] = {'a','b','c','d','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout << "The alphabets are: "; 
    for(int i =0; i < 26; i++){
        cout << a[i] << ", ";
    }
    return 0;
}