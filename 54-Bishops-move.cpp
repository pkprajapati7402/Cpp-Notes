// Count the total number of moves a bishop have in chess.
// Bishop moves digonally in chess.
// given with the positions in x and y, as A and B.

#include <iostream>
using namespace std;

class myclass{
    public:
        int poss(int i, int j){
            if((i == 1 || j == 8) || (i == 8 || j == 1)){
                return 7;
            } else if((i == 2 || j == 7) || (i == 7 || j == 2)){
                return 9;
            } else if((i == 3 || j == 6) || (i == 6 || j == 3)){
                return 11;
            } else if((i == 4 || j == 5) || (i == 5 || j == 4)){
                return 13;
            }
            return 0;
        }
};
int main(){
    int n, m;
    cout << "Enter position of bishop(i,j): ";
    cin >> n >> m;
    myclass myobj;
    cout << "Moves: " << myobj.poss(n,m) << endl;
    return 0;
}

// Method 2:
int solve(int A, int B){
    int count =0;
    count += min(8-A,8-B);
    count += min(8-A,8-1);
    count += min(A-1,B-1);
    count += min(A-1,8-B);
    return count;
}