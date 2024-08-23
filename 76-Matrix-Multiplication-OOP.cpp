// Write a c++ program to multiply two matrices using oop
#include <iostream>
using namespace std;
class ans{
    private:
        int a[100][100], b[100][100], m, n, o, p;
  public:
    void input(){
        cout << "Enter size of first matrix: ";
        cin >> m >> n;
        cout << "Enter size of second matrix: "; cin >> o >> p;
        if(n != o){
            cout << "Not possible!"; 
            
        }
        cout << "Enter elemenst of first matrix: ";
        for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix: ";
        for(int i = 0; i < o; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    }
    void multiply(){
        int product[100][100];
        for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            product[i][j] = 0;
            for (int k = 0; k < n; k++){
                product[i][j] += a[i][k] * b[k][j];
            }
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    }
};
int main(){

    ans obj;
    obj.input();
    obj.multiply();
    return 0;
}
