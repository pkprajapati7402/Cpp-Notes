#include <iostream>
#include <vector>

using namespace std;

#define UNASSIGNED 0
#define N 9

// Function to print the Sudoku grid
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

// Function to check if it's safe to place a number in a cell
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Check if 'num' is not already placed in the current row, column, and 3x3 subgrid
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num || 
            grid[row - row % 3 + x / 3][col - col % 3 + x % 3] == num) {
            return false;
        }
    }
    return true;
}

// Function to solve the Sudoku using backtracking
bool solveSudoku(int grid[N][N]) {
    int row, col;
    bool isEmpty = true;
    
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == UNASSIGNED) {
                isEmpty = false;
                break;
            }
        }
        if (!isEmpty) {
            break;
        }
    }

    // No unassigned position is found, puzzle solved
    if (isEmpty) {
        return true;
    }

    // Try digits from 1 to 9
    for (int num = 1; num <= 9; num++) {
        // Check if it is safe to place the number
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            // Return true if solving the rest of the grid is successful
            if (solveSudoku(grid)) {
                return true;
            }
            // Failure, unmake and try again
            grid[row][col] = UNASSIGNED;
        }
    }

    return false; // Triggers backtracking
}

int main() {
    int grid[N][N];

    cout << "Enter the Sudoku puzzle (use 0 for empty cells):" << endl;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cin >> grid[row][col];
        }
    }

    if (solveSudoku(grid)) {
        printGrid(grid);
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
