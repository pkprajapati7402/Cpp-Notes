/*
Prefix is a terminology where
Array: 2, 5, 7, 9, 11, -6
Prefix: 2, 7, 14, 23, 34, 28

Here each element is added to it's next succeeding element.
*/

#include <iostream>
#include <vector>
using namespace std;

class sol{
    private:
        int n, c;
    public:
        vector<int> arr;
        vector<int> prefix;
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for(int i = 0; i < n; i++){
                cin >> c;
                arr.push_back(c);
            }
            prefix.resize(n);
        }
        void pref(){
            prefix[0] = arr[0];
            for(int i = 1; i < n; i++){
                prefix[i] = prefix[i - 1] + arr[i];
            }
        }
        
        void display(){
            cout << "Prefix array: ";
            for(int i = 0; i < n; i++){
                cout << prefix[i] << " ";
            }
            cout << endl;
        }
};
int main(){
    sol obj;
    obj.input();
    obj.pref();
    obj.display();
    
    return 0;
}