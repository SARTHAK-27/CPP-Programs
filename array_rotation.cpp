//Program for array rotation
//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

#include<iostream>
using namespace std;

int leftrotateonebyone(int arr[], int n){
    int temp = arr[0], i;
    for(i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}

int rotate(int arr[], int d, int n){
    for(int i=0; i<d; i++){
        leftrotateonebyone(arr, n);
    }
}

int printarray(int arr[], int n){
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function calling 
    rotate(arr, 2, n); 
    printarray(arr, n); 
  
    return 0; 
} 