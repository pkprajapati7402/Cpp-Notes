#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& arr) {
    int maxleft = 0, maxright = 0, water = 0;
    int maxheight = arr[0], index = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxheight){
            maxheight = arr[i];
            index = i;
        }
    }
    // First part.
    for(int i = 0; i < index; i++){
       if(leftmax > arr[i]){
        water += leftmax - arr[i];
       } else{
        leftmax = height[i];
       }
    }
    // Second part.
    for(int i = arr.size - 1; i > index; i--){
        if(rightmax > arr[i]){
            water += rightmax - arr[i];
        } else{
            rightmax = arr[i];
        }
    }

    return water;
}


int main() {
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    cout << "Trapped water: " << trap(arr) << endl;
    return 0;
}
