#include <bits/stdc++.h>
using namespace std;

// Function to print stars recursively
void printStars(int n) {
    // Base case: If n becomes 0, return
    if (n == 0) {
        return;
    }

    cout << "*";
    printStars(n - 1);
}

// Function to print arrow recursively
void printArrow(int n, int i) {
    // Base case: If i is equal to 2n, return
    if (i == 2 * n) {
        return;
    }

    // Print upper part of the arrow
    if (i < n) {
        printStars(i + 1);
        cout << "\n";
        printArrow(n, i + 1);
    }
    // Print lower part of the arrow
    else {
        printStars(2 * n - i);
        cout << "\n";
        printArrow(n, i + 1);
    }
}

// Driver code
int main() {
    // Taking input from user
    int n = 5;

    // Function calling
    printArrow(n, 0);

    return 0;
}
