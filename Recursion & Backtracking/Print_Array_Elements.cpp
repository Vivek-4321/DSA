#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    if(size == 0){
        cout << arr[0] << " ";
        return;
    }
    
    cout << arr[size] << " ";

    printArray(arr, --size);
}

int main(){

    int arr[] = { 12, 23, 45, 56, 67};
    int size = sizeof(arr)/ sizeof(int);

    printArray(arr,size-1);

    return 0;
}