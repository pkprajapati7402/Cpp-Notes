// C++ program to find the diffence of two matrices.

class solution{
    private:
        vector<vector<int>> a;
        vector<vector<int>> b;
        int m, n;
    public:
        void input(){
            cout << "Enter Row and Columns: ";
            cin >> m >> n;
            a.resize(m, vector<int> (n));
            b.resize(m, vector<int> (n));
            cout << "Enter elements of Matrix1: ";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> a[i][j];
                }
            }
            cout << "Enter elements of Matrix2: ";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cin >> b[i][j];
                }
            }
        }
        void diff(){
            cout << "Here's your matrix: \n";
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << a[i][j] - b[i][j] << " ";
                }
                cout << "endl";
            }
        }
};

int main(){
    solution obj;
    obj.input();
    obj.diff();
    return 0;
}