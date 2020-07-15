//Program to multiply two matrices
//Given two matrices, the task to multiply them. Matrices can either be square or rectangular.

#include<iostream>
using namespace std;
#define N 4

int multiplymatrices(int mat1[][N], int mat2[][N], int res[][N]){
    int i, j, k;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            res[i][j] = 0;
            for(k=0;k<N;k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() 
{ 
    int i, j; 
    int res[N][N]; // To store result 
    int mat1[N][N] = {{1, 1, 1, 1}, 
                      {2, 2, 2, 2}, 
                      {3, 3, 3, 3}, 
                      {4, 4, 4, 4}}; 
  
    int mat2[N][N] = {{1, 1, 1, 1}, 
                      {2, 2, 2, 2}, 
                      {3, 3, 3, 3}, 
                      {4, 4, 4, 4}}; 
  
    multiplymatrices(mat1, mat2, res); 
    
    cout<<"The resulatnt matrix is"<<endl;
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        cout << res[i][j] << " "; 
        cout << "\n"; 
    } 
  
    return 0; 
} 