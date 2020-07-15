//Program for subtraction of matrices
//The below program subtracts and adds two square matrices of size 4*4, we can change N for different dimension.

#include<iostream>
using namespace std;
#define N 4

int subtract(int A[][N], int B[][N], int C[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

int add(int A[][N], int B[][N], int C[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()  
{  
    int A[N][N] = { {1, 1, 1, 1},  
                    {2, 2, 2, 2},  
                    {3, 3, 3, 3},  
                    {4, 4, 4, 4}};  
  
    int B[N][N] = { {1, 1, 1, 1},  
                    {2, 2, 2, 2},  
                    {3, 3, 3, 3},  
                    {4, 4, 4, 4}};  
  
    int C[N][N]; // To store result  
    int i, j;  
    subtract(A, B, C);  
  
    cout << "Result matrix is " << endl;  
    for (i = 0; i < N; i++)  
    {  
        for (j = 0; j < N; j++)  
        cout << C[i][j] << " ";  
        cout << endl;  
    }  

    add(A, B, C);  
  
    cout << "Result matrix is " << endl;  
    for (i = 0; i < N; i++)  
    {  
        for (j = 0; j < N; j++)  
        cout << C[i][j] << " ";  
        cout << endl;  
    }
  
    return 0;  
}  
