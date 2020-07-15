//Ceiling in a sorted array
//Given a sorted array and a value x, the ceiling of x is the smallest element in array greater 
//than or equal to x, and the floor is the greatest element smaller than or equal to x. 
//Assume than the array is sorted in non-decreasing order. 
//Write efficient functions to find floor and ceiling of x.

#include<iostream>
using namespace std;

int ceilSearch(int arr[], int low, int high, int x){
    int mid = (low + high)/2;

    if(x <= arr[low]){
        return low;
    }
    if(x > arr[high]){
        return -1;
    }
    if(x == arr[mid]){
        return mid;
    }
    else if(arr[mid] < x){
        if(mid+1 <= high && x <= arr[mid+1]){
            return mid+1;
        }
        else{
            return ceilSearch(arr, mid+1, high, x);
        }
    }
    else{
        if(mid-1 >= low && x > arr[mid-1]){
            return mid-1;
        }
        else{
            return ceilSearch(arr, low, mid-1, x);
        }
    }
}

int main()  
{  
    int arr[] = {1, 2, 8, 10, 10, 12, 19};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int x = 20;  
    int index = ceilSearch(arr, 0, n-1, x);  
    if(index == -1)  
        cout << "Ceiling of " << x  
             << " doesn't exist in array ";  
    else
        cout << "ceiling of " << x  
             << " is " << arr[index];  
      
    return 0;  
}