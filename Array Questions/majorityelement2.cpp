//Check for Majority Element in a sorted array
//Question: Write a C function to find if a given integer x appears more than n/2 times in a sorted array of n integers.

#include<iostream>
using namespace std;

int isMajority(int arr[], int n, int x){
    int i;
    int lastindex = n%2 ? (n/2+1) : (n/2) ;

    for (i=0; i< lastindex; i++){
        if(arr[i] == x && arr[i+n/2] == x){
            return 1;
        }
        return 0;
    }
}

int main() 
{ 
     int arr[] ={1, 2, 3, 4, 4, 4, 4}; 
     int n = sizeof(arr)/sizeof(arr[0]); 
     int x = 4; 
     if (isMajority(arr, n, x)) 
        cout<<x<<" appears more than "<<n/2<<" times in arr[]"<<endl; 
     else
        cout<<x<<" does not appear more than "<<n/2<<" times in arr[]"<<endl; 
  
   return 0; 
} 