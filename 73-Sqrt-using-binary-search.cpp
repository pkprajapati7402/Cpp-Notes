// C++ program to find the square root of a numer using binary search method.


#include <iostream>
using namespace std;

class myclass {
    public:
        int root(int n) {
            if (n == 0 || n == 1) 
                return n; 
            
            int f = 0, l = n, ans = 0;
            while (f <= l) {
                int mid = f + (l - f) / 2;
                if (mid * mid == n) {
                    return mid;
                }
                if (mid * mid < n) {
                    f = mid + 1;
                    ans = mid; 
                } else {
                    l = mid - 1;
                }
            }
            return ans;
        }
};

int main() {
    int n;
    cout << "Enter n: "; 
    cin >> n;
    myclass myobj;
    cout << "Square Root: " << myobj.root(n) << endl;
    return 0;
}
