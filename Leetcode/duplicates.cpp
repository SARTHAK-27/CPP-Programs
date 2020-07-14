//  Remove Duplicates from Sorted Array

//Given a sorted array nums, remove the duplicates in-place such that 
//each element appear only once and return the new length.

//Do not allocate extra space for another array, 
//you must do this by modifying the input array in-place 
//with O(1) extra memory

#include<iostream>
#include<vector>
using namespace std;

int rem_duplicates(vector<int> arr){
    if(arr.size() == 0){
        return 0;
    }
    int i = 0;
    for(int j=1; j<arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}