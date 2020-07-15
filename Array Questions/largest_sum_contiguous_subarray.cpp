//Largest Sum Contiguous Subarray
//Write an efficient program to find the sum of contiguous subarray within 
//a one-dimensional array of numbers which has the largest sum.

#include<iostream>
using namespace std;

int maxSubArraySum(int arr[], int n){
    int max_so_far = 0, max_ending_here = 0;
    for(int i=0; i<n; ++i){
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        else if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
}