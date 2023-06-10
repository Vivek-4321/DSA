#include <iostream>
using namespace std;

// Recursive function to find the second largest number in an array
int findSecondLargest(int arr[], int start, int end) {
    // Base case: If array contains less than two elements
    if (start >= end) {
        return INT_MIN;
    }

    // Recursive case
    int mid = (start + end) / 2;
    int leftMax = findSecondLargest(arr, start, mid);
    int rightMax = findSecondLargest(arr, mid + 1, end);

    if (leftMax > rightMax) {
        return leftMax > arr[mid + 1] ? arr[mid + 1] : leftMax;
    } else {
        return rightMax > arr[mid] ? arr[mid] : rightMax;
    }
}

// Driver code
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    int secondLargest = findSecondLargest(arr, 0, size - 1);

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array.";
    } else {
        cout << "The second largest element in the array is: " << secondLargest;
    }

    return 0;
}
