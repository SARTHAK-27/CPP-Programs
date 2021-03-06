//Print a given matrix in spiral form

#include<iostream>
using namespace std;
#define r 3
#define c 6

int spiralPrint(int m, int n, int a[r][c]){
    int i, k=0, l=0;

// first row
    while(k<m && l<n){
        for(i=l; i<n; i++){
            cout<<a[k][i]<<" ";
        }
        k++;

// last column
        for(i=k; i<m; i++){
            cout<<a[i][n-1]<<" ";
        }
        n--;

//last row
    if(k < m){
        for(i=n-1; i>=l; i--){
            cout<<a[m-1][i]<<" ";
        }
        m--;
    }

// first column
    if(l<n){
        for(i=m-1; i>=k; i--){
            cout<<a[i][l]<<" ";
        }
        l++;
    }
}
}

int main() 
{ 
    int a[r][c] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  
    spiralPrint(r, c, a); 
    return 0; 
} 
