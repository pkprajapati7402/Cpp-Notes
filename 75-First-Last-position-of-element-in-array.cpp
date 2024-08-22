// C++ program to print the first and last occurence of a target value in a given array.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
pair<int,int> occ(int arr[],int tar){
    int a = -1, b = -1, f = 0, l = sizeof(arr)/sizeof(int) - 1, mid;
    while(f <= l){
        mid = f + (l - f)/2;
        if(arr[mid] == tar){
            a = mid;
            l = mid - 1;
        } else if(arr[mid] < tar){
            f = mid + 1;
        } else if(arr[mid] > tar){
            l = mid - 1;
        }
    }
    f = 0, l = sizeof(arr)/sizeof(int) - 1;
    while(f <= l){
        mid = f + (l - f)/2;
        if(arr[mid] == tar){
            b = mid;
            f = mid + 1;
        } else if(arr[mid] < tar){
            f = mid + 1;
        } else if(arr[mid] > tar){
            l = mid - 1;
        }
    }
    
    return {a,b};
}
int main(){
    int n, a[1000], tar;
    cout << "Enter n: "; cin >> n; cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n); cout << "Enter target: "; cin >> tar;
    cout << "Ocurrence: " << occ(a,tar) << endl;
    return 0;
}