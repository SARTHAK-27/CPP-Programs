//Majority Element
//Write a function which takes an array and prints the majority element (if it exists), 
//otherwise prints “No Majority Element”. A majority element in an array A[] of size n is an element that 
//appears more than n/2 times (and hence there is at most one such element).

#include<iostream>
using namespace std;

int majorityelement(int arr[], int n){
    int max_count = 0;
    int index = -1;

    for(int i=0; i< n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count > max_count){
            max_count = count;
            index = i;
            
        }
    }
        if(max_count > 2){
            cout<<arr[index]<<endl;
        }
        else{
            cout<<"No Majority Elemnt"<<endl;
        }
    }

int main()  
{  
    int arr[] = {1, 1, 2, 1, 3, 5, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);  
      
    // Function calling  
    majorityelement(arr, n);  
  
    return 0;  
} 