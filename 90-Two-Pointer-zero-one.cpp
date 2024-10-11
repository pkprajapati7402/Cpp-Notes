/*
Write a c++ program to seperate 0's and 1's.
*/
#include <iostream>
#include <vector>
using namespace std;
class sep{
    private:
        int a[100];
        int n;
    public:
        void input(){
            cout << "Enter number of elements: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            cout << "\nHere's your vector: ";
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
        }
        void sortMethod(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(a[j] > a[i]){
                        swap(a[j],a[i]);
                    }
                }
            }
            cout << "\nHere's your sorted vector: ";
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
        }
        void countMethod(){
            cout << "\nHere's your counted vector: ";
            int count0 = 0, count1 = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == 0){
                    count0++;
                } else{
                    count1++;
                }
            }
            // Printing 0's;
            for(int i = 0; i < count0; i++){
                cout << "0 ";
            }
            for(int i = 0; i < count1; i++){
                cout << "1 ";
            }
        }
        void countTwoPoint(){
            cout << "\nHere's your Two pointer array: ";
            int begin = 0, end = n - 1;
            while(begin <= end){
                if(a[begin] == 1 && a[end] == 1){
                    end--;
                } else if(a[begin] == 0 && a[end] == 1){
                    begin++;
                } else if(a[begin] == 1 && a[end] == 0){
                    swap(a[begin], a[end]);
                } else if(a[begin] == 0 && a[end] == 0){
                    begin++;
                }
            }
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }

        }
        void twopointer(){
            cout << "\nHere's your Two pointer array: ";
            int start = 0, end = n - 1;
            while(start < end){
                if(a[start] == 0){
                    start++;
                } else{
                    if(a[end] == 0){
                        swap(a[start],a[end]);
                    } else{
                        end--;
                    }
                }
            }
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
        }


};
int main(){
    sep a;
    int opt, n;
    while(opt){
        cout << "\n1. Sorting Method\n2. Counting Method\n3. Two Pointer Method\n4. Two Pointer 2\n5. Exit\nChoose Option: ";
        cin >> n;
        switch(n){
            case 1: a.input(); a.sortMethod(); break;
            case 2: a.input(); a.countMethod(); break;
            case 3: a.input(); a.countTwoPoint(); break;
            case 4: a.input(); a.twopointer(); break;
            case 5: return 0;
            default: cout << "Wrong Input Try Again!"; beak;
        }
        cout << "\nDo you want to continue[0/1]: ";
        cin >> opt;
    }
     
    return 0;
}