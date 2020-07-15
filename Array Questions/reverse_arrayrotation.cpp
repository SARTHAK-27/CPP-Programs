//Reversal algorithm for array rotation
//Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.

#include<iostream>
using namespace std;

int reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] =  arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int leftRotate(int arr[], int d, int n){
    if(d == 0){
        return 0;
    }
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
}

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int d = 2; 
  
    // in case the rotating factor is 
    // greater than array length 
    d = d % n; 
  
    // Function calling 
    leftRotate(arr, d, n); 
    printArray(arr, n); 
  
    return 0; 
} 