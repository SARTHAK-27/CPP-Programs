//Program to find largest element in an array
//Given an array, find the largest element in it.

#include<iostream>
using namespace std;

int largestelement(int arr[], int n){
    int i;
    int max = arr[0];

    for(i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {10, 15, 30, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"The largest element is "<<largestelement(arr, n);
    return 0;
}