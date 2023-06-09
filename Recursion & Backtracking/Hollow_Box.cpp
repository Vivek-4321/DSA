#include <bits/stdc++.h>
using namespace std;

void printHollowRectangle(int rows, int cols, int currentRow, int currentCol) {
    // Base case: first or last row, or first or last column
    if (currentRow == 0 || currentRow == rows - 1 || currentCol == 0 || currentCol == cols - 1) {
        cout << "* ";
    } else {
        // Recursive case: not an edge column
        if (currentCol != 0 && currentCol != cols - 1) {
            cout << "  ";
        } else {
            cout << "* ";
        }
    }

    // Update current column and row
    currentCol++;
    if (currentCol >= cols) {
        currentCol = 0;
        currentRow++;
        cout << std::endl;
    }

    // Recursive call
    if (currentRow < rows) {
        printHollowRectangle(rows, cols, currentRow, currentCol);
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    printHollowRectangle(rows, cols, 0, 0);

    return 0;
}
