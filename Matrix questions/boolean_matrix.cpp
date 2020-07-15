//A Boolean Matrix Question
//Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] 
//is 1 (or true) then make all the cells of ith row and jth column as 1.

#include<iostream>
using namespace std;
#define r 3
#define c 4

int printMatrix(bool mat[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int modifyMatrix(bool mat[r][c]){
    bool row[r];
    bool col[c];

    for(int i=0; i<r; i++){
        row[i] = 0;
    }

    for(int j=0; j<c; j++){
        col[j] = 0;
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(row[i] == 1 || col[j] == 1){
                mat[i][j] = 1;
            }
        }
    }
}

int main() 
{ 
    bool mat[r][c] = { {1, 0, 0, 1}, 
                       {0, 0, 1, 0}, 
                       {0, 0, 0, 0}}; 
  
    cout << "Input Matrix \n"; 
    printMatrix(mat); 
  
    modifyMatrix(mat); 
  
    printf("Matrix after modification \n"); 
    printMatrix(mat); 
  
    return 0; 
} 
