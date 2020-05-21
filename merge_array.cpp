//Merge an array of size n into another array of size m+n
//There are two sorted arrays. First one is of size m+n containing only m elements. 
//Another one is of size n and contains n elements. Merge these two arrays into the first array of size m+n 
//such that the output is sorted.

#include<iostream>
using namespace std;

#define NA -1

int moveToEnd(int mplusN[], int size){
    int j =  size - 1;
    for(int i = size-1; i>=0; i--){
        if(mplusN[i] != NA){
            mplusN[j] = mplusN[i];
            j--;
        }
    }
}

int merge(int mPlusN[], int N[], int m, int n){
    int i=n;
    int j=0;
    int k=0;

    while(k < (m+n)){
        if((i<(m+n) && mPlusN[i] <= N[j]) || (j == n))
        {
            mPlusN[k] = mPlusN[i];
            k++;
            i++;
        }
    else{
        mPlusN[k] = N[j];
        k++;
        j++;
    }
    }
}

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main() 
{ 
   /* Initialize arrays */
   int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20}; 
   int N[] = {5, 7, 9, 25}; 
     
   int n = sizeof(N) / sizeof(N[0]); 
   int m = sizeof(mPlusN) / sizeof(mPlusN[0]) - n; 
  
   /*Move the m elements at the end of mPlusN*/
   moveToEnd(mPlusN, m + n); 
  
   /*Merge N[] into mPlusN[] */
   merge(mPlusN, N, m, n); 
  
   /* Print the resultant mPlusN */
   printArray(mPlusN, m+n); 
  
   return 0; 
} 



