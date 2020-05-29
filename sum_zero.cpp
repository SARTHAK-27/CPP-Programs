//Two elements whose sum is closest to zero
//Question: An Array of integers is given, both +ve and -ve. You need to find the two elements such that their sum is closest to zero.

#include<iostream>
using namespace std;

int minAbsSumPair(int arr[], int arr_size){
    int count = 0;
    int l, r, min_l, min_r, min_sum, sum;
    
    if(arr_size < 2){
        cout<<"Invalid Input";
        return 0;
    }

    min_l = 0;
    min_r = 1;
    min_sum = arr[0] + arr[1];

    for(l=0; l<arr_size-1; l++){
        for(r=l+1; r<arr_size; r++){
            sum = arr[l] + arr[r];
            if(abs(sum) < abs(min_sum)){
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
        }
    }
    cout << "The two elements whose sum is minimum are "
         << arr[min_l] << " and " << arr[min_r];
}

int main() 
{ 
    int arr[] = {1, 60, -10, 70, -80, 85}; 
    minAbsSumPair(arr, 6); 
    return 0; 
} 
  