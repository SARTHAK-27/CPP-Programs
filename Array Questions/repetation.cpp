//Find the two repeating elements in a given array
//You are given an array of n+2 elements. All elements of the array are in range 1 to n. 
//And all elements occur once except two numbers which occur twice. Find the two repeating numbers.

#include<iostream>
using namespace std;

void printRepeating(int arr[], int n){
    int* count = new int[sizeof(int)*(n-2)];
    int i;

    cout<<"Repeating elements are ";
    for(i=0; i<n; i++){
        if(count[arr[i]] == 1){
            cout<<arr[i]<<" ";
        }
        else{
            count[arr[i]]++;
        }
    }
}

int main()  
{  
    int arr[] = {4, 2, 4, 5, 2, 3, 1};  
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    printRepeating(arr, arr_size);  
    return 0;  
}