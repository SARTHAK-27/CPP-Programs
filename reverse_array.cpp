//Write a program to reverse an array or string
//Given an array (or string), the task is to reverse the array/string.

#include<iostream>
using namespace std;

int printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

/*
int reversearray(int arr[], int n){
    for(int j=n-1;j>=0;j--){
        cout<<arr[j];
    }
    cout<<endl;
}
*/

void reversearray2(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
} 

int main()  
{ 
    int arr[] = {1, 2, 3, 4, 5, 6}; 
      
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    // To print original array  
    printarray(arr, n); 
      
    // Function calling 
    //reversearray(arr, n); 
      
    reversearray2(arr, 0, n-1);
    printarray(arr, n);
      
    return 0; 
} 