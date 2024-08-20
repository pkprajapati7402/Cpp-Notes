// Selection Sort Algorithm to sort the array of char in ascending order.

#include <iostream>
using namespace std;

class myclass{
    public:
        char sort(char arr[], int n){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(arr[i] > arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
            return arr[n];
        }
};
int main(){
    int n;
    char arr[1000];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter characters: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After sorting elements: ";
    myclass myobj;
    myobj.sort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}