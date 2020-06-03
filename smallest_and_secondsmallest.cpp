//Find the smallest and second smallest elements in an array
//Write an efficient C program to find smallest and second smallest element in an array.

#include<iostream>
#include<limits.h>
using namespace std;

int print2Smallest(int arr[], int arr_size){
    if(arr_size < 2){
        cout<<"Invalid Input"<<endl;
        return 0;
    }

    int i, first, second;
    first=second=INT_MAX;
    for(i=0; i<arr_size; i++){
        if(arr[i] < first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first){
            second = arr[i];
        }
    }
    if(second == INT_MAX){
        cout<<"There is no second smallest number";
    }
    else{
        cout<<"The smalesst number is "<<first<<" and the seond smallest is "<<second<<endl;
    }
}

int main()  
{  
    int arr[] = {12, 13, 1, 10, 34, 1};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    print2Smallest(arr, n);  
    return 0;  
}  