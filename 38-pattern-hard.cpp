// Difficult pattern Problems.

/*
Pattern 1: 
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "  ";
            
        }
        for(int k = 1; k <= i; k++){
           
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 2:
     *
    * *
   * * *
  * * * *
 * * * * *

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << " *";
        }
        cout << endl;
    }
}

/*
Pattern 3:
      1
    2 2
  3 3 3
4 4 4 4

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "  ";
           
        }
        for(int k = 1; k <= i; k++){
           
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
Pattern 4:
      1
    1 2
  1 2 3
1 2 3 4

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }
}

/*
Pattern 5:
      a
    a b
  a b c
a b c d
*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i<= n; i++){
        char c = 'a';
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

/*
Pattern 6: 
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i<= n; i++){
        
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
           
        }
        cout << endl;
    }
    return 0;
}
