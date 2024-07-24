// Advance Pattern Printing.
/*
Pattern 1: Input 5.
    *
   ***
  *****
 *******
*********
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        // Printing Spaces.
        for(int j = 0; j < n - i; j++){
            cout << "  ";
        }
        // Printing characters.
        for(int k= 1; k <= (2 * i) - 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


/*
Pattern 2: Input: 5
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        // Printing spaces.
        for(int j = 0; j < n - i; j++){
            cout << "  ";
        }
        // Divided characters in two halfs, left half and right half.
        //Left Half.
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        // Right Half.
        
        for(int l = i - 1; l >= 1; l--){
            
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Pattern 3: Input 5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int max = (2 * n) - 1;
    for(int i = 1; i <= n; i++){
        //Printing spaces.
        for(int j = 0; j <= i - 1; j++){

            cout << "  ";
        }
        // Priting characters.
        for(int k = 1; k <= max; k++){
            cout << "* ";
        }
        max -= 2;
        cout << endl;
    }
    return 0;
}
// Alternate Method.
#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cin >> n;
    for(i = n; i >=  1; i--){
        for(j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(j = 1; j <= 2 * i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 4: Input -> 4
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/


// C++ Code.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < 2 * n; i++) {
        if(i < n) {
            for(int j = 0; j < n - i; j++) {
                cout << "* ";
            }
            for(int j = 0; j < 2 * i; j++) {
                cout << "  ";
            }
            for(int j = 0; j < n - i; j++) {
                cout << "* ";
            }
        } else {
            for(int j = 0; j < i - n + 1; j++) {
                cout << "* ";
            }
            for(int j = 0; j < 2 * (2 * n - i - 1); j++) {
                cout << "  ";
            }
            for(int j = 0; j < i - n + 1; j++) {
                cout << "* ";
            }
        }
    }  
} 


/*
Pattern 5: Input 4
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/
#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cout << "Enter n: ";
    cin >> n;
    for(i = 1; i <= (2 * n) - 1; i++){
        if (i <= n){
            for(j = 1; j <= i; j++){
                cout << "* ";
            }
            // Space.
            for(j = 0; j < 2*(n - i); j++){
                cout << "  ";
            }
            for(j = 1; j <= i; j++){
                cout << "* ";
            }
        } else{
            for(j = 1; j <= (2 * n) - i; j++){
                cout << "* ";
            }
            for(j = 1; j <= 2*(i - n); j++){
                cout << "  ";
            }
            for(j = 1; j <= (2*n) - i; j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
}

/*
Pattern 6: Input 4
   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <=  n; i++){
        // Spaces.
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        // Characters.
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    int a = n;
    for(int i = 1; i <= n; i++){
        // Spaces
        for(int j= 1; j < i; j++){
            cout << " ";
        }
        // Characters.
        for(int j= 1; j <= a; j++){
            cout << "* ";
            
        }
        a--;
        cout << endl;
    }
}