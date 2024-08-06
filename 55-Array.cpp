// Array is a collection of elements of same data type.
// Array decleration.


// Program 1: Find maximum, and minimum number in array.
#include <iostream>
using namespace std;
class myclass{
    public:
        int Max(int a[1000], int n){
            int c = INT_MIN;
            for(int i = 0; i < n; i++){
                if(a[i] > c){
                    c = a[i];
                }
            }
            return c;
        }
        int Min(int a[1000], int n){
            int ans = INT_MAX;
            for(int i = 0; i < n; i++){
                if(a[i] < ans){
                    ans = a[i];
                }
            }
            return ans;
        }
};
int main(){
    int a[1000], n;
    cout << "Enter number of elements: "; 
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // finding max and min.
    myclass myobj;
    cout << "Maximum: " << myobj.Max(a, n) << endl;
    cout << "Minimum: " << myobj.Min(a, n) << endl;
    return 0;
}

// Program 2: Number of elements in the array.
#include <iostream>
using namespace std;
int main(){
    int  n;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = sizeof(a)/ sizeof(a[0]);
     cout <<	"elements:	" << ans;
    return 0;
}

