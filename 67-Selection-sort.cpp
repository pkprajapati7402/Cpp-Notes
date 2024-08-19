// Selection sort is a technique of sorting array into either Increasing or Decreasing order. In Selections sort we select each element one by one and compare to the succeeding number if it's greater, replace it, and put small numbers on to the left and following the further loop.

// Sorting in Reverse order decending order.
#include <iostream>
using namespace std;
class sort{
    public:
        int sortingAsc(int arr[],int n){
            for(int i = 0; i < n; i++){
                for(int j = i+1; j < n; j++){
                    if(arr[i] > arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
            return arr[n];
        }
        int sortingDec(int arr[], int n){
            for(int i = 0; i < n; i++){
                for(int j = i+1; j < n; j++){
                    if(arr[i] < arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
            return arr[n];
        }
};
int main(){
    int arr[1000], n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort myobj, obj2;
    myobj.sortingDec(arr,n);
    cout << "After sorting array Descending: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nAfter sorting array Ascending: ";
    obj2.sortingAsc(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}