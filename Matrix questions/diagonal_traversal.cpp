//Zigzag (or diagonal) traversal of Matrix
//Given a 2D matrix, print all elements of the given matrix in diagonal order.
#include<iostream>
#define R 5
#define C 4
using namespace std;

bool isvaild(int i, int j){
    if(i<0 || i>=R || j<0 || j>=C){
        return false;
    }
    else{
        return true;
    }
}

int diagonalOrder(int arr[][C]){
    for(int k=0; k<C; k++){
        cout<<arr[k][0]<<" ";
        int i = k-1;
        int j = 1;

        while(isvaild(i,j)){
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }

    for(int k=1; k<R; k++){
        cout<<arr[R-1][k]<<" ";
        int i = R-2;
        int j = k+1;

        while(isvaild(i,j)){
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }
}

int main() 
{ 
  
    int arr[][C] = {{1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}, 
        {17, 18, 19, 20}, 
    }; 
    diagonalOrder(arr); 
    return 0; 
}