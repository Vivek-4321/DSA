#include<bits/stdc++.h>
using namespace std;

int FindOccurrence(int arr[], int key, int size) {
    if (size < 0) {
        return -1;
    }

    if (arr[size] == key) {
        return size+1;
    }

    return FindOccurrence(arr, key, size - 1);
}


int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,5};
    int size  = sizeof(arr)/sizeof(int);
    
    int result = FindOccurrence(arr,5,size);
    cout << result ;
    
    return 0;
}