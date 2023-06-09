#include<bits/stdc++.h>
using namespace std;

void printHollowTriangle(int n, int row) {
    // Base case
    if (row == n) {
        return;
    }

    // Recursive case
    for (int col = 0; col <= row; col++) {
        // First row or last row
        if (row == 0 || row == n - 1) {
            cout << "* ";
        }
        // Not the first or last row
        else {
            // First column or last column
            if (col == 0 || col == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
    }
    cout << endl;

    // Recursive call
    printHollowTriangle(n, row + 1);
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    printHollowTriangle(n, 0);

    return 0;
}