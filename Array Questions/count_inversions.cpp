//Count Inversions in an array | Set 1 (Using Merge Sort)
//Inversion Count for an array indicates – how far (or close) the array is from being sorted. 
//If array is already sorted then inversion count is 0. 
//If array is sorted in reverse order that inversion count is the maximum.
//Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

#include<iostream>
using namespace std;

int count_inversion(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main() 
{ 
    int arr[] = { 1, 20, 6, 4, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<< " Number of inversions are "
         << count_inversion(arr, n); 
    return 0; 
} 