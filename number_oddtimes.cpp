//Find the Number Occurring Odd Number of Times
//Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times.
// Find the number in O(n) time & constant space.

#include<iostream>
using namespace std;

int getOddOccurrence(int arr[], int n){
    for(int i=0; i<n; ++i){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count % 2 != 0){
            return arr[i];
        }
    }
    return -1;
}

int getOddOccurrence_fast(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}

int main() 
    { 
        int arr[] = { 2, 3, 5, 4, 5, 2, 
                      4, 3, 5, 2, 4, 4, 2 }; 
        int n = sizeof(arr) / sizeof(arr[0]); 
  
        // Function calling 
        cout << getOddOccurrence_fast(arr, n); 
  
        return 0; 
    } 