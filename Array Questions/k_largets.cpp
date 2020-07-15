//k largest(or smallest) elements in an array | added Min Heap method

//Question: Write an efficient program for printing k largest 
//elements in an array. Elements in array can be in any order.

//For example, if given array is [1, 23, 12, 9, 30, 2, 50] and 
//you are asked for the largest 3 elements i.e., 
//k = 3 then your program should print 50, 30 and 23.

#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] > a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int kLargest(int arr[], int n, int k){
    selectionSort(arr, n);
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}

int main() 
{ 
    int arr[] = { 1, 23, 12, 9, 30, 2, 50 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 
    kLargest(arr, n, k); 
}