#include<bits/stdc++.h>
using namespace std;

int Sum (int arr[], int size){
    if(size == 0){
        return arr[0];
    }

    return arr[size] + Sum(arr,size-1);
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);

    int result = Sum(arr,size-1);
    cout << result;

    return 0;
}