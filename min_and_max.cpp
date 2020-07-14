//Maximum and minimum of an array using minimum number of comparisons
//Write a C function to return minimum and maximum in an array. You program should make minimum number of comparisons.


#include<iostream>
#include<stdio.h>
#include<utility>
using namespace std;
std::pair;

struct pair{
    int min;
    int max;
};

int getMinMax(int array[], int n){
    struct pair minmax ;
    int i;

    if(n == 1){
        minmax.max = array[0];
        minmax.min = array[0];
        return minmax;
    }

    if(n == 2){
        if(array[0] > array[1]){
            minmax.max = array[0];
            minmax.min = array[1];
        }
        else{
            minmax.max = array[1];
            minmax.min = array[0];
        }
    }

    for(int i=1; i<=n; i++){
        if(array[i] > minmax.max){
            minmax.max = array[i];
        }
        else if(array[i] < minmax.min){
            minmax.min = array[i];
        }
    }
    return minmax;
}

int main() 
{ 
  int arr[] = {1000, 11, 445, 1, 330, 3000}; 
  int arr_size = 6; 
  struct pair minmax = getMinMax (arr, arr_size); 
  printf("nMinimum element is %d", minmax.min); 
  printf("nMaximum element is %d", minmax.max); 
  getchar(); 
}