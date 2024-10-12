/*
Suffix is a technique just like prefix but added in reverse order.
*/

#include <iostream>
#include <vector>
using namespace std;

class sol{
    private:
        int n, c;
    public:
        vector<int> arr;
        vector<int> suffix;
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for(int i = 0; i < n ; i++){
                cin >> c;
                arr.push_back(c);
            }
            suffix.resize(n);
        }
        void suff(){
            suffix[n - 1] = arr[n - 1];
            for(int i = n - 2; i >= 0; i--){
                suffix[i] = suffix[i + 1] + arr[i];
            }
        }
        void display(){
            cout << "Suffix elements: ";
            for(int i = 0; i < n; i++){
                cout << suffix[i] << " ";
            }
            cout << endl;
        }
};
int main(){
    sol obj;
    obj.input();
    obj.suff();
    obj.display();
    return 0;
}