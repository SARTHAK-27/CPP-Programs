//Leaders in an array
//Write a program to print all the LEADERS in the array. An element is leader 
//if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
//For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.
//Let the input array be arr[] and size of the array be size.

#include<iostream>
using namespace std;

int printLeaders(int arr[], int n){
    int max_right = arr[n - 1];
    cout<<max_right<<" ";

    for(int i=n-2; i>0; i--){
        if(max_right < arr[i]){
            max_right = arr[i];
            cout<<max_right<<" ";
        }
    }
}

int main() 
{ 
    int arr[] = {16, 17, 4, 3, 5, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printLeaders(arr, n); 
    return 0; 
} 