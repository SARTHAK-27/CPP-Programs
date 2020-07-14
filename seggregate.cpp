//Segregate 0s and 1s in an array
//You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.

#include<iostream>
using namespace std;

int segregate0and1(int arr[], int n){
    int count = 0,i;
    for(i=0; i<n; i++){
        if(arr[i] == 0){
            count++;
        }
    }

    for(i=0; i<count; i++){
        arr[i] = 0;
    }
    for(i=count; i<n; i++){
        arr[i] = 1;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() 
{ 
    int arr[] = { 0, 1, 0, 1, 1, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
      
    segregate0and1(arr, n); 
    print(arr, n); 
      
    return 0; 
} 